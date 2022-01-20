/**
 * @file lv_demo_widgets.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "GUI/gui.h"
#include "dhcp_client.h"
#include "serial.h"
#include "stm32f7xx_hal_conf.h"
#include "main.h"


/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum {
    DISP_SMALL,
    DISP_MEDIUM,
    DISP_LARGE,
}disp_size_t;

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void phasors_create(lv_obj_t * parent);
static void frequency_create(lv_obj_t * parent);
static void phase_create(lv_obj_t * parent);
static void harmonics_create(lv_obj_t * parent);
static void settings_create(lv_obj_t * parent);
static void color_changer_create(lv_obj_t * parent);


static void color_changer_event_cb(lv_event_t * e);
static void color_event_cb(lv_event_t * e);
//static void ip_status_timer_cb(lv_timer_t * timer);
static void phasors_timer_cb(lv_timer_t * timer);

/**********************
 *  STATIC VARIABLES
 **********************/
static disp_size_t disp_size;

static lv_obj_t * tv;
static lv_style_t style_text_muted;
static lv_style_t style_text;
static lv_style_t style_text_red;
static lv_style_t style_text_green;
static lv_style_t style_text_blue;
static lv_style_t style_title;
static lv_style_t style_icon;
static lv_style_t style_bullet;


static lv_obj_t * chart1;
static lv_obj_t * chart2;
static lv_obj_t * chart3;

static lv_chart_series_t * ser1;

//static lv_chart_series_t * ser2;
static lv_chart_series_t * ser3;
//static lv_chart_series_t * ser4;

static lv_chart_series_t *ser1_phase;
static lv_chart_series_t *ser2_phase;
static lv_chart_series_t *ser3_phase;

static lv_chart_series_t *ser1_harmonic;
static lv_chart_series_t *ser2_harmonic;
static lv_chart_series_t *ser3_harmonic;

static const lv_font_t * font_large;
static const lv_font_t * font_normal;
static const lv_font_t * font_normal2;



static lv_obj_t * status_label_info = NULL;
static lv_obj_t * ip_label_info = NULL;
static lv_obj_t * server_label_info = NULL;
static lv_obj_t * gps_label_info = NULL;
static lv_obj_t * gps_protocol_info = NULL;

xSemaphoreHandle GUI_mutex = NULL;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_init_widgets(void)
{
    if(LV_HOR_RES <= 320) disp_size = DISP_SMALL;
    else if(LV_HOR_RES < 720) disp_size = DISP_MEDIUM;
    else disp_size = DISP_LARGE;

    GUI_mutex = xSemaphoreCreateMutex();

    font_large = &lv_font_montserrat_20;
    font_normal = LV_FONT_DEFAULT;
    font_normal2 = &lv_font_montserrat_16;

    lv_coord_t tab_h;
    if(disp_size == DISP_LARGE) {
        tab_h = 70;
#if LV_FONT_MONTSERRAT_24
        font_large     =  &lv_font_montserrat_24;
#else
        LV_LOG_WARN("LV_FONT_MONTSERRAT_24 is not enabled for the widgets demo. Using LV_FONT_DEFAULT instead.")
#endif
#if LV_FONT_MONTSERRAT_16
        font_normal    =  &lv_font_montserrat_16;
#else
        LV_LOG_WARN("LV_FONT_MONTSERRAT_16 is not enabled for the widgets demo. Using LV_FONT_DEFAULT instead.")
#endif
    } else if(disp_size == DISP_MEDIUM) {
        tab_h = 45;
#if LV_FONT_MONTSERRAT_20
        font_large     =  &lv_font_montserrat_20;
#else
        LV_LOG_WARN("LV_FONT_MONTSERRAT_20 is not enabled for the widgets demo. Using LV_FONT_DEFAULT instead.")
#endif
#if LV_FONT_MONTSERRAT_14
        font_normal    =  &lv_font_montserrat_14;
#else
        LV_LOG_WARN("LV_FONT_MONTSERRAT_14 is not enabled for the widgets demo. Using LV_FONT_DEFAULT instead.")
#endif
    } else { /* disp_size == DISP_SMALL */
        tab_h = 45;
#if LV_FONT_MONTSERRAT_18
        font_large     =  &lv_font_montserrat_18;
#else
    LV_LOG_WARN("LV_FONT_MONTSERRAT_18 is not enabled for the widgets demo. Using LV_FONT_DEFAULT instead.")
#endif
#if LV_FONT_MONTSERRAT_12
        font_normal    =  &lv_font_montserrat_12;
#else
    LV_LOG_WARN("LV_FONT_MONTSERRAT_12 is not enabled for the widgets demo. Using LV_FONT_DEFAULT instead.")
#endif
    }

#if LV_USE_THEME_DEFAULT
    lv_theme_default_init(NULL, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), LV_THEME_DEFAULT_DARK, font_normal);
#endif

    lv_style_init(&style_text_muted);
    lv_style_set_text_opa(&style_text_muted, LV_OPA_50);
    lv_style_set_text_font(&style_text_muted, font_normal);

    lv_style_init(&style_text);
    lv_style_set_text_font(&style_text, font_normal2);

    lv_style_init(&style_text_red);
    lv_style_set_text_font(&style_text_red, font_normal2);
    lv_style_set_text_color(&style_text_red, lv_palette_main(LV_PALETTE_RED));

    lv_style_init(&style_text_green);
    lv_style_set_text_font(&style_text_green, font_normal2);
    lv_style_set_text_color(&style_text_green, lv_palette_main(LV_PALETTE_GREEN));

    lv_style_init(&style_text_blue);
    lv_style_set_text_font(&style_text_blue, font_normal2);
    lv_style_set_text_color(&style_text_blue, lv_palette_main(LV_PALETTE_BLUE));

    lv_style_init(&style_title);
    lv_style_set_text_font(&style_title, font_large);

    lv_style_init(&style_icon);
    lv_style_set_text_color(&style_icon, lv_theme_get_color_primary(NULL));
    lv_style_set_text_font(&style_icon, font_large);

    lv_style_init(&style_bullet);
    lv_style_set_border_width(&style_bullet, 0);
    lv_style_set_radius(&style_bullet, LV_RADIUS_CIRCLE);

    tv = lv_tabview_create(lv_scr_act(), LV_DIR_TOP, tab_h);

    lv_obj_set_style_text_font(lv_scr_act(), font_normal, 0);

    if(disp_size == DISP_LARGE) {
        lv_obj_t * tab_btns = lv_tabview_get_tab_btns(tv);
        lv_obj_set_style_pad_left(tab_btns, (LV_HOR_RES / 2) - 100, 0);
        lv_obj_t * logo = lv_img_create(tab_btns);
        LV_IMG_DECLARE(icon);
        lv_img_set_src(logo, &icon);
        lv_obj_align(logo, LV_ALIGN_LEFT_MID, -LV_HOR_RES / 2 + 125, 0);

        lv_obj_t * label = lv_label_create(tab_btns);
        lv_obj_add_style(label, &style_title, 0);
        lv_label_set_text(label, "FreePMU 2.0.0");
        lv_obj_align_to(label, logo, LV_ALIGN_OUT_RIGHT_TOP, 10, 0);

        label = lv_label_create(tab_btns);
        lv_label_set_text(label, "Harmonics Edition");
        lv_obj_add_style(label, &style_text_muted, 0);
        lv_obj_align_to(label, logo, LV_ALIGN_OUT_RIGHT_BOTTOM, 10, 0);


    }

    lv_obj_t * t1 = lv_tabview_add_tab(tv, "Phasors");
    lv_obj_t * t2 = lv_tabview_add_tab(tv, "Frequency");
    lv_obj_t * t3 = lv_tabview_add_tab(tv, "Phase");
    lv_obj_t * t4 = lv_tabview_add_tab(tv, "Harmonics");
    lv_obj_t * t5 = lv_tabview_add_tab(tv, "Settings");
    phasors_create(t1);
    frequency_create(t2);
    phase_create(t3);
    harmonics_create(t4);
    settings_create(t5);

    //color_changer_create(tv);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
extern volatile uint32_t gps_status;
static void baudrate_event_handler(lv_event_t * e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t * obj = lv_event_get_target(e);
	if(code == LV_EVENT_VALUE_CHANGED) {
		//char buf[32];
		//lv_dropdown_get_selected_str(obj, buf, sizeof(buf));
		//LV_LOG_USER("Option: %s", buf);
		uint32_t baudrate = 115200;
		uint16_t idx = lv_dropdown_get_selected(obj);
		switch(idx){
			case 0:
				baudrate = 9600;
				gps_status = 0;
				break;
			case 1:
				baudrate = 38400;
				gps_status = 0;
				break;
			case 2:
				baudrate = 115200;
				gps_status = 0;
				break;
			default:
				break;
		}
		if (gps_status == 0){
			lv_label_set_text(gps_label_info, "Disconnected");
			lv_label_set_text(gps_protocol_info, "Unknown");
			UARTChangeBaudrate(SERIAL, baudrate);
		}
	}
}

static void settings_create(lv_obj_t * parent)
{
	lv_obj_t * panel1 = lv_obj_create(parent);
    lv_obj_set_height(panel1, LV_SIZE_CONTENT);

    lv_obj_t * panel1_title = lv_label_create(panel1);
    lv_label_set_text(panel1_title, "IEEE C37.118 Server");
    lv_obj_add_style(panel1_title, &style_title, 0);

    lv_obj_t * server_label = lv_label_create(panel1);
    lv_label_set_text(server_label, "Status:");
    lv_obj_add_style(server_label, &style_text_muted, 0);

    server_label_info = lv_label_create(panel1);
    lv_label_set_text(server_label_info, "Disconnected");
    lv_obj_add_style(server_label_info, &style_text, 0);

    lv_obj_t * server_label_id = lv_label_create(panel1);
    lv_label_set_text(server_label_id, "PMU ID:");
    lv_obj_add_style(server_label_id, &style_text_muted, 0);

    // Show the ID of the device.
    char idstr[3] = {48 + (PMUID/10), 48 + (PMUID%10)};
    lv_obj_t * server_label_id_val = lv_label_create(panel1);
    lv_label_set_text(server_label_id_val, idstr);
    lv_obj_add_style(server_label_id_val, &style_text, 0);

    //lv_timer_create(server_status_timer_cb, 1000, server_label_info);

    /*Create the second panel*/
    lv_obj_t * panel2 = lv_obj_create(parent);
    lv_obj_set_height(panel2, LV_SIZE_CONTENT);

    lv_obj_t * panel2_title = lv_label_create(panel2);
    lv_label_set_text(panel2_title, "Ethernet Interface");
    lv_obj_add_style(panel2_title, &style_title, 0);

    lv_obj_t * status_label = lv_label_create(panel2);
    lv_label_set_text(status_label, "Status");
    lv_obj_add_style(status_label, &style_text_muted, 0);

    status_label_info = lv_label_create(panel2);
    lv_label_set_text(status_label_info, "Disconnected");
    lv_obj_add_style(status_label_info, &style_text, 0);

    lv_obj_t * mac_label = lv_label_create(panel2);
    lv_label_set_text(mac_label, "MAC Address");
    lv_obj_add_style(mac_label, &style_text_muted, 0);

    lv_obj_t * mac_label_info = lv_label_create(panel2);
    char mac_address[20];
    sprintf(mac_address, "%02x:%02x:%02x:%02x:%02x:%02x", MAC_ADDR0, MAC_ADDR1, MAC_ADDR2, MAC_ADDR3, MAC_ADDR4, MAC_ADDR5);
    lv_label_set_text(mac_label_info, mac_address);
    lv_obj_add_style(mac_label_info, &style_text, 0);

    lv_obj_t * ip_label = lv_label_create(panel2);
    lv_label_set_text(ip_label, "IP Address");
    lv_obj_add_style(ip_label, &style_text_muted, 0);

    ip_label_info = lv_label_create(panel2);
    lv_label_set_text(ip_label_info, "0.0.0.0");
    lv_obj_add_style(ip_label_info, &style_text, 0);

    //lv_timer_create(ip_status_timer_cb, 1000, ip_label_info);


    /*Create the third panel*/
    lv_obj_t * panel3 = lv_obj_create(parent);
    lv_obj_t * panel3_title = lv_label_create(panel3);
    lv_label_set_text(panel3_title, "GPS Interface");
    lv_obj_add_style(panel3_title, &style_title, 0);

    lv_obj_t * gps_label = lv_label_create(panel3);
    lv_label_set_text(gps_label, "Status");
    lv_obj_add_style(gps_label, &style_text_muted, 0);

    gps_label_info = lv_label_create(panel3);
    lv_label_set_text(gps_label_info, "Disconnected");
    lv_obj_add_style(gps_label_info, &style_text, 0);

    lv_obj_t * baudrate_label = lv_label_create(panel3);
    lv_label_set_text(baudrate_label, "Baudrate (bps)");
    lv_obj_add_style(baudrate_label, &style_text_muted, 0);

    lv_obj_t * baudrate = lv_dropdown_create(panel3);
    lv_dropdown_set_options_static(baudrate, "9600\n38400\n115200");
    lv_obj_add_event_cb(baudrate, baudrate_event_handler, LV_EVENT_ALL, NULL);
    lv_dropdown_set_selected(baudrate, 2);

    lv_obj_t * gps_protocol_label = lv_label_create(panel3);
    lv_label_set_text(gps_protocol_label, "Protocol");
    lv_obj_add_style(gps_protocol_label, &style_text_muted, 0);

    gps_protocol_info = lv_label_create(panel3);
    lv_label_set_text(gps_protocol_info, "Unknown");
    lv_obj_add_style(gps_protocol_info, &style_text, 0);

	static lv_coord_t grid_main_col_dsc[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
	static lv_coord_t grid_main_row_dsc[] = {LV_GRID_CONTENT, LV_GRID_CONTENT, LV_GRID_TEMPLATE_LAST};

	/*Create the top panel*/
	static lv_coord_t grid_1_col_dsc[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
	static lv_coord_t grid_1_row_dsc[] = {LV_GRID_CONTENT, 10, LV_GRID_TEMPLATE_LAST};

	static lv_coord_t grid_2_col_dsc[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
	static lv_coord_t grid_4_col_dsc[] = {LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
	static lv_coord_t grid_2_row_dsc[] = {
			LV_GRID_CONTENT,  /*Title*/
			5,                /*Separator*/
			10,  /*Box title*/
			20,               /*Boxes*/
			2,                /*Separator*/
			10,  /*Box title*/
			20,               /*Boxes*/
			2,                /*Separator*/
			10,  /*Box title*/
			20,               /*Boxes*/
			LV_GRID_TEMPLATE_LAST
	};


	lv_obj_set_grid_dsc_array(parent, grid_main_col_dsc, grid_main_row_dsc);
	lv_obj_set_grid_cell(panel1, LV_GRID_ALIGN_STRETCH, 0, 2, LV_GRID_ALIGN_CENTER, 1, 1);

	lv_obj_set_grid_dsc_array(panel1, grid_4_col_dsc, grid_1_row_dsc);

	lv_obj_set_grid_cell(panel1_title, LV_GRID_ALIGN_CENTER, 0, 2, LV_GRID_ALIGN_START, 0, 1);
	lv_obj_set_grid_cell(server_label, LV_GRID_ALIGN_END, 0, 1, LV_GRID_ALIGN_START, 1, 1);
	lv_obj_set_grid_cell(server_label_info, LV_GRID_ALIGN_START, 1, 1, LV_GRID_ALIGN_START, 1, 1);
	lv_obj_set_grid_cell(server_label_id, LV_GRID_ALIGN_END, 2, 1, LV_GRID_ALIGN_START, 0, 1);
	lv_obj_set_grid_cell(server_label_id_val, LV_GRID_ALIGN_START, 3, 1, LV_GRID_ALIGN_START, 0, 1);

	lv_obj_set_grid_cell(panel2, LV_GRID_ALIGN_STRETCH, 0, 1, LV_GRID_ALIGN_START, 0, 1);
	lv_obj_set_grid_dsc_array(panel2, grid_2_col_dsc, grid_2_row_dsc);
	lv_obj_set_grid_cell(panel2_title, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 0, 1);
	lv_obj_set_grid_cell(status_label, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 2, 1);
	lv_obj_set_grid_cell(status_label_info, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 3, 1);
	lv_obj_set_grid_cell(mac_label, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 5, 1);
	lv_obj_set_grid_cell(mac_label_info, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 6, 1);
	lv_obj_set_grid_cell(ip_label, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 8, 1);
	lv_obj_set_grid_cell(ip_label_info, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 9, 1);

	lv_obj_set_grid_cell(panel3, LV_GRID_ALIGN_STRETCH, 1, 1, LV_GRID_ALIGN_STRETCH, 0, 1);
	lv_obj_set_grid_dsc_array(panel3, grid_2_col_dsc, grid_2_row_dsc);
	lv_obj_set_grid_cell(panel3_title, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_CENTER, 0, 1);
	lv_obj_set_grid_cell(gps_label, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 2, 1);
	lv_obj_set_grid_cell(gps_label_info, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 3, 1);
	lv_obj_set_grid_cell(baudrate_label, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 5, 1);
	lv_obj_set_grid_cell(baudrate, LV_GRID_ALIGN_START, 0, 2, LV_GRID_ALIGN_START, 6, 1);
	lv_obj_set_grid_cell(gps_protocol_label, LV_GRID_ALIGN_START, 1, 2, LV_GRID_ALIGN_START, 2, 1);
	lv_obj_set_grid_cell(gps_protocol_info, LV_GRID_ALIGN_START, 1, 2, LV_GRID_ALIGN_START, 3, 1);

}

extern volatile float Mag_R_final,Mag_S_final,Mag_T_final,Fase_R_final,Fase_S_final,Fase_T_final;
static lv_obj_t * meter;
lv_meter_indicator_t *indic_red, *indic_green, *indic_blue;
lv_obj_t *mag_R_label,*mag_S_label,*mag_T_label,*phase_R_label,*phase_S_label,*phase_T_label;

static void phasors_timer_cb(lv_timer_t * timer){
	lv_meter_set_indicator_end_value(meter, indic_red, Fase_R_final);
	lv_meter_set_indicator_end_value(meter, indic_green, Fase_S_final);
	lv_meter_set_indicator_end_value(meter, indic_blue, Fase_T_final);

	char text[16];

	snprintf(text, 16, "%.2f", Mag_R_final);
	lv_label_set_text(mag_R_label, text);
	snprintf(text, 16, "%.2f", Mag_S_final);
	lv_label_set_text(mag_S_label, text);
	snprintf(text, 16, "%.2f", Mag_T_final);
	lv_label_set_text(mag_T_label, text);

	snprintf(text, 16, "%.2f", Fase_R_final);
	lv_label_set_text(phase_R_label, text);
	snprintf(text, 16, "%.2f", Fase_S_final);
	lv_label_set_text(phase_S_label, text);
	snprintf(text, 16, "%.2f", Fase_T_final);
	lv_label_set_text(phase_T_label, text);
}

static void phasors_create(lv_obj_t * parent){
	/**
	 * A clock from a meter
	*/
	meter = lv_meter_create(parent);
	lv_obj_set_size(meter, 360, 360);
	lv_obj_set_pos(meter, 10, 0);
	lv_obj_set_style_bg_opa(meter, LV_OPA_COVER, LV_PART_INDICATOR);

	lv_obj_t * panel1 = lv_obj_create(parent);
	lv_obj_set_pos(panel1, 410, 0);
    lv_obj_set_size(panel1, 340, 360);


    lv_obj_t *title = lv_label_create(panel1);
    lv_label_set_text(title, "Magnitude (V)");
    lv_obj_add_style(title, &style_title, 0);
    lv_obj_set_pos(title, 10, 20);

    title = lv_label_create(panel1);
    lv_label_set_text(title, "Phase (°)");
    lv_obj_add_style(title, &style_title, 0);
    lv_obj_set_pos(title, 200, 20);

    mag_R_label = lv_label_create(panel1);
    lv_label_set_text(mag_R_label, "0.0");
    lv_obj_add_style(mag_R_label, &style_text_red, 0);
    lv_obj_set_pos(mag_R_label, 10, 60);

    mag_S_label = lv_label_create(panel1);
    lv_label_set_text(mag_S_label, "0.0");
    lv_obj_add_style(mag_S_label, &style_text_green, 0);
    lv_obj_set_pos(mag_S_label, 10, 90);

    mag_T_label = lv_label_create(panel1);
    lv_label_set_text(mag_T_label, "0.0");
    lv_obj_add_style(mag_T_label, &style_text_blue, 0);
    lv_obj_set_pos(mag_T_label, 10, 120);

    phase_R_label = lv_label_create(panel1);
    lv_label_set_text(phase_R_label, "0.0");
    lv_obj_add_style(phase_R_label, &style_text_red, 0);
    lv_obj_set_pos(phase_R_label, 200, 60);

    phase_S_label = lv_label_create(panel1);
    lv_label_set_text(phase_S_label, "0.0");
    lv_obj_add_style(phase_S_label, &style_text_green, 0);
    lv_obj_set_pos(phase_S_label, 200, 90);

    phase_T_label = lv_label_create(panel1);
    lv_label_set_text(phase_T_label, "0.0");
    lv_obj_add_style(phase_T_label, &style_text_blue, 0);
    lv_obj_set_pos(phase_T_label, 200, 120);


#if 0
    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {5, 50}, {300, 50}};

    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, 2);
    lv_style_set_line_color(&style_line, lv_color_black());

    /*Create a line and apply the new style*/
    lv_obj_t * line1;
    line1 = lv_line_create(panel1);
    lv_line_set_points(line1, line_points, 2);     /*Set the points*/
    //lv_obj_add_style(line1, &style_line);     /*Set the points*/
    //lv_obj_align(line1, NULL, LV_ALIGN_CENTER, 0, 0);
#endif

	/*Create a scale for the minutes*/
	/*181 ticks in a 360 degrees range (the last and the first line overlaps)*/
	lv_meter_scale_t * scale_meter = lv_meter_add_scale(meter);
	lv_meter_set_scale_ticks(meter, scale_meter, 181, 0, 0, lv_palette_main(LV_PALETTE_GREY));
	lv_meter_set_scale_major_ticks(meter, scale_meter, 15, 2, 15, lv_color_black(), 20);    /*Every tick is major*/
	lv_meter_set_scale_range(meter, scale_meter, 180, -180, 360, -180);

	//LV_IMG_DECLARE(blue_arrow)
	//LV_IMG_DECLARE(green_arrow)
	//LV_IMG_DECLARE(red_arrow)

	/*Add a the hands from images*/
	indic_red = lv_meter_add_needle_line(meter, scale_meter, 6, lv_palette_main(LV_PALETTE_RED), -15);
	indic_green = lv_meter_add_needle_line(meter, scale_meter, 6, lv_palette_main(LV_PALETTE_GREEN), -15);
	indic_blue = lv_meter_add_needle_line(meter, scale_meter, 6, lv_palette_main(LV_PALETTE_BLUE), -15);
	//indic_red = lv_meter_add_needle_img(meter, scale_min, &red_arrow, 0, 0);
	//indic_green = lv_meter_add_needle_img(meter, scale_min, &green_arrow, 0, 0);
	//indic_blue = lv_meter_add_needle_img(meter, scale_min, &blue_arrow, 0, 0);

	/*Create an animation to set the value*/
	lv_timer_create(phasors_timer_cb, 500, NULL);
}

extern float Freq_final;
lv_obj_t *frequency_label;
static void frequency_chart_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);

    if(code == LV_EVENT_PRESSED || code == LV_EVENT_RELEASED) {
        lv_obj_invalidate(obj); /*To make the value boxes visible*/
    }
    else if(code == LV_EVENT_DRAW_PART_BEGIN) {
        lv_obj_draw_part_dsc_t * dsc = lv_event_get_param(e);
        /*Set the markers' text*/
        if(dsc->part == LV_PART_TICKS && dsc->id == LV_CHART_AXIS_PRIMARY_X) {
			const char *x_scale[] = {"8.0s", "6.0s", "4.0s", "2.0s", "0.0s"};
			lv_snprintf(dsc->text, sizeof(dsc->text), "%s", x_scale[dsc->value]);
        }
    }
}

static void frequency_timer_cb(lv_timer_t * timer){
	char text[16];
	snprintf(text, 16, "%.3f", Freq_final);
	lv_label_set_text(frequency_label, text);

	lv_chart_set_next_value(chart1, ser1, (lv_coord_t)(Freq_final * 100));
	lv_chart_refresh(chart1); /*Required after direct set*/
}

static void frequency_create(lv_obj_t * parent){

	//lv_obj_set_flex_flow(parent, LV_FLEX_FLOW_ROW_WRAP);
	lv_obj_t * panel1 = lv_obj_create(parent);
	lv_obj_set_pos(panel1, 0, 0);
    lv_obj_set_size(panel1, 760, 370);

	lv_obj_t * title = lv_label_create(panel1);
    lv_label_set_text(title, "Frequency (Hz)");
    lv_obj_add_style(title, &style_title, 0);
    lv_obj_set_pos(title, 0, 0);

    frequency_label = lv_label_create(panel1);
	lv_label_set_text(frequency_label, "0.0");
	lv_obj_add_style(frequency_label, &style_title, 0);
	lv_obj_set_pos(frequency_label, 620, 0);

	lv_obj_t *frequency_label_2 = lv_label_create(panel1);
	lv_label_set_text(frequency_label_2, "Hz");
	lv_obj_add_style(frequency_label_2, &style_title, 0);
	lv_obj_set_pos(frequency_label_2, 690, 0);

    lv_obj_t *axis_y_label_1 = lv_label_create(panel1);
#if (NOMINAL_FREQ == 60)
    lv_label_set_text(axis_y_label_1, "61.00");
#else
    lv_label_set_text(axis_y_label_1, "51.00");
#endif
    lv_obj_add_style(axis_y_label_1, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_1, 0, 35);

    lv_obj_t *axis_y_label_2 = lv_label_create(panel1);
#if (NOMINAL_FREQ == 60)
    lv_label_set_text(axis_y_label_2, "60.50");
#else
    lv_label_set_text(axis_y_label_2, "50.50");
#endif
    lv_obj_add_style(axis_y_label_2, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_2, 0, 100);

    lv_obj_t *axis_y_label_3 = lv_label_create(panel1);
#if (NOMINAL_FREQ == 60)
    lv_label_set_text(axis_y_label_3, "60.00");
#else
    lv_label_set_text(axis_y_label_3, "55.00");
#endif
    lv_obj_add_style(axis_y_label_3, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_3, 0, 165);

    lv_obj_t *axis_y_label_4 = lv_label_create(panel1);
#if (NOMINAL_FREQ == 60)
    lv_label_set_text(axis_y_label_4, "59.50");
#else
    lv_label_set_text(axis_y_label_4, "49.50");
#endif
    lv_obj_add_style(axis_y_label_4, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_4, 0, 232);

    lv_obj_t *axis_y_label_5 = lv_label_create(panel1);
#if (NOMINAL_FREQ == 60)
    lv_label_set_text(axis_y_label_5, "59.00");
#else
    lv_label_set_text(axis_y_label_5, "49.00");
#endif
    lv_obj_add_style(axis_y_label_5, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_5, 0, 297);

    chart1 = lv_chart_create(panel1);
	lv_obj_set_pos(chart1, 55, 30);
    lv_obj_set_size(chart1, 655, 290);
    lv_chart_set_axis_tick(chart1, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 5, 1, false, 80);
    lv_chart_set_axis_tick(chart1, LV_CHART_AXIS_PRIMARY_X, 0, 0, 5, 1, true, 50);
    lv_chart_set_div_line_count(chart1, 0, 5);
    lv_chart_set_point_count(chart1, 201);
    lv_obj_add_event_cb(chart1, frequency_chart_event_cb, LV_EVENT_ALL, NULL);

    lv_obj_set_style_border_side(chart1, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM, 0);
    lv_obj_set_style_radius(chart1, 0, 0);

#if (NOMINAL_FREQ == 60)
    lv_chart_set_range(chart1, LV_CHART_AXIS_PRIMARY_Y, 5900, 6100);
#else
    lv_chart_set_range(chart1, LV_CHART_AXIS_PRIMARY_Y, 4900, 5100);
#endif
    lv_chart_set_range(chart1, LV_CHART_AXIS_PRIMARY_X, 0, 30);

    ser1 = lv_chart_add_series(chart1, lv_theme_get_color_primary(chart1), LV_CHART_AXIS_PRIMARY_Y);

    lv_timer_create(frequency_timer_cb, 40, NULL);
}

static void phase_chart_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);

    if(code == LV_EVENT_PRESSED || code == LV_EVENT_RELEASED) {
        lv_obj_invalidate(obj); /*To make the value boxes visible*/
    }
    else if(code == LV_EVENT_DRAW_PART_BEGIN) {
        lv_obj_draw_part_dsc_t * dsc = lv_event_get_param(e);
        /*Set the markers' text*/
        if(dsc->part == LV_PART_TICKS && dsc->id == LV_CHART_AXIS_PRIMARY_X) {
			const char *x_scale[] = {"8.0s", "6.0s", "4.0s", "2.0s", "0.0s"};
			lv_snprintf(dsc->text, sizeof(dsc->text), "%s", x_scale[dsc->value]);
        }
    }
}

lv_obj_t *phase_R_label_graph,*phase_S_label_graph,*phase_T_label_graph;
static void phase_timer_cb(lv_timer_t * timer){
	char text[16];
	snprintf(text, 16, "%.2f", Fase_R_final);
	lv_label_set_text(phase_R_label_graph, text);

	snprintf(text, 16, "%.2f", Fase_S_final);
	lv_label_set_text(phase_S_label_graph, text);

	snprintf(text, 16, "%.2f", Fase_T_final);
	lv_label_set_text(phase_T_label_graph, text);

	lv_chart_set_next_value(chart2, ser1_phase, (lv_coord_t)Fase_R_final);
	lv_chart_set_next_value(chart2, ser2_phase, (lv_coord_t)Fase_S_final);
	lv_chart_set_next_value(chart2, ser3_phase, (lv_coord_t)Fase_T_final);
	lv_chart_refresh(chart2); /*Required after direct set*/
}

static void phase_create(lv_obj_t * parent){

	lv_obj_t * panel1 = lv_obj_create(parent);
	lv_obj_set_pos(panel1, 0, 0);
    lv_obj_set_size(panel1, 760, 370);

	lv_obj_t * title = lv_label_create(panel1);
    lv_label_set_text(title, "Phase (degrees)");
    lv_obj_add_style(title, &style_title, 0);
    lv_obj_set_pos(title, 0, 0);

    phase_R_label_graph = lv_label_create(panel1);
	lv_label_set_text(phase_R_label_graph, "0.0");
	lv_obj_add_style(phase_R_label_graph, &style_text_red, 0);
	lv_obj_set_pos(phase_R_label_graph, 460, 0);

    phase_S_label_graph = lv_label_create(panel1);
	lv_label_set_text(phase_S_label_graph, "0.0");
	lv_obj_add_style(phase_S_label_graph, &style_text_green, 0);
	lv_obj_set_pos(phase_S_label_graph, 540, 0);

    phase_T_label_graph = lv_label_create(panel1);
	lv_label_set_text(phase_T_label_graph, "0.0");
	lv_obj_add_style(phase_T_label_graph, &style_text_blue, 0);
	lv_obj_set_pos(phase_T_label_graph, 620, 0);

    lv_obj_t *axis_y_label_1 = lv_label_create(panel1);
    lv_label_set_text(axis_y_label_1, "180°");
    lv_obj_add_style(axis_y_label_1, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_1, 0, 35);

    lv_obj_t *axis_y_label_2 = lv_label_create(panel1);
    lv_label_set_text(axis_y_label_2, "90°");
    lv_obj_add_style(axis_y_label_2, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_2, 0, 100);

    lv_obj_t *axis_y_label_3 = lv_label_create(panel1);
    lv_label_set_text(axis_y_label_3, "0°");
    lv_obj_add_style(axis_y_label_3, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_3, 0, 165);

    lv_obj_t *axis_y_label_4 = lv_label_create(panel1);
    lv_label_set_text(axis_y_label_4, "-90°");
    lv_obj_add_style(axis_y_label_4, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_4, 0, 232);

    lv_obj_t *axis_y_label_5 = lv_label_create(panel1);
    lv_label_set_text(axis_y_label_5, "-180°");
    lv_obj_add_style(axis_y_label_5, &style_text_muted, 0);
    lv_obj_set_pos(axis_y_label_5, 0, 297);

    chart2 = lv_chart_create(panel1);
	lv_obj_set_pos(chart2, 55, 30);
    lv_obj_set_size(chart2, 655, 290);
    lv_chart_set_axis_tick(chart2, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 5, 1, false, 80);
    lv_chart_set_axis_tick(chart2, LV_CHART_AXIS_PRIMARY_X, 0, 0, 5, 1, true, 50);
    lv_chart_set_div_line_count(chart2, 0, 5);
    lv_chart_set_point_count(chart2, 201);
    lv_obj_add_event_cb(chart2, phase_chart_event_cb, LV_EVENT_ALL, NULL);

    lv_obj_set_style_border_side(chart2, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM, 0);
    lv_obj_set_style_radius(chart2, 0, 0);

    lv_chart_set_range(chart2, LV_CHART_AXIS_PRIMARY_Y, -180, 180);
    lv_chart_set_range(chart2, LV_CHART_AXIS_PRIMARY_X, 0, 30);

    ser1_phase = lv_chart_add_series(chart2, lv_palette_main(LV_PALETTE_RED), LV_CHART_AXIS_PRIMARY_Y);
    ser2_phase = lv_chart_add_series(chart2, lv_palette_main(LV_PALETTE_GREEN), LV_CHART_AXIS_PRIMARY_Y);
    ser3_phase = lv_chart_add_series(chart2, lv_palette_main(LV_PALETTE_BLUE), LV_CHART_AXIS_PRIMARY_Y);

    lv_timer_create(phase_timer_cb, 40, NULL);
}


extern float FasesAC_mod_R[50];
extern float FasesAC_mod_S[50];
extern float FasesAC_mod_T[50];

static void harmonics_timer_cb(lv_timer_t * timer){
    for (int i = 1; i <= 16; i++) {
        ser1_harmonic->y_points[i] = (lv_coord_t)(FasesAC_mod_R[i-1]*100);
        ser2_harmonic->y_points[i] = (lv_coord_t)(FasesAC_mod_S[i-1]*100);
        ser3_harmonic->y_points[i] = (lv_coord_t)(FasesAC_mod_T[i-1]*100);
    }
	lv_chart_refresh(chart3); /*Required after direct set*/
}


static void harmonics_create(lv_obj_t * parent){

	lv_obj_t * panel1 = lv_obj_create(parent);
	lv_obj_set_pos(panel1, 0, 0);
    lv_obj_set_size(panel1, 760, 370);

	lv_obj_t * title = lv_label_create(panel1);
    lv_label_set_text(title, "Harmonics (%)");
    lv_obj_add_style(title, &style_title, 0);
    lv_obj_set_pos(title, 0, 0);

    chart3 = lv_chart_create(panel1);
	lv_obj_set_pos(chart3, 55, 30);
    lv_obj_set_size(chart3, 655, 290);
    lv_chart_set_axis_tick(chart3, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 5, 1, true, 80);
    lv_chart_set_axis_tick(chart3, LV_CHART_AXIS_PRIMARY_X, 0, 0, 17, 1, true, 50);
    lv_chart_set_div_line_count(chart3, 0, 5);
    lv_chart_set_point_count(chart3, 17);
    lv_chart_set_type(chart3, LV_CHART_TYPE_BAR);
    //lv_obj_add_event_cb(chart3, phase_chart_event_cb, LV_EVENT_ALL, NULL);

    lv_obj_set_style_border_side(chart3, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM, 0);
    lv_obj_set_style_radius(chart3, 0, 0);

    lv_chart_set_range(chart3, LV_CHART_AXIS_PRIMARY_Y, 0, 20);
    lv_chart_set_range(chart3, LV_CHART_AXIS_PRIMARY_X, 1, 16);
    lv_chart_set_range(chart3, LV_CHART_AXIS_SECONDARY_X, 1, 16);

    ser1_harmonic = lv_chart_add_series(chart3, lv_palette_main(LV_PALETTE_RED), LV_CHART_AXIS_PRIMARY_Y);
    ser2_harmonic = lv_chart_add_series(chart3, lv_palette_main(LV_PALETTE_GREEN), LV_CHART_AXIS_PRIMARY_Y);
    ser3_harmonic = lv_chart_add_series(chart3, lv_palette_main(LV_PALETTE_BLUE), LV_CHART_AXIS_PRIMARY_Y);

    for (int i = 0; i <= 16; i++) {
    	lv_chart_set_next_value(chart3, ser1_harmonic, (lv_coord_t)0);
    	lv_chart_set_next_value(chart3, ser2_harmonic, (lv_coord_t)0);
    	lv_chart_set_next_value(chart3, ser3_harmonic, (lv_coord_t)0);
    }

    lv_timer_create(harmonics_timer_cb, 1000, NULL);
}



static void color_changer_create(lv_obj_t * parent)
{
    static lv_palette_t palette[] = {
            LV_PALETTE_BLUE, LV_PALETTE_GREEN, LV_PALETTE_BLUE_GREY,  LV_PALETTE_ORANGE,
            LV_PALETTE_RED, LV_PALETTE_PURPLE, LV_PALETTE_TEAL, _LV_PALETTE_LAST };

    lv_obj_t * color_cont = lv_obj_create(parent);
    lv_obj_remove_style_all(color_cont);
    lv_obj_set_flex_flow(color_cont, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(color_cont, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(color_cont, LV_OBJ_FLAG_FLOATING);

    lv_obj_set_style_bg_color(color_cont, lv_color_white(), 0);
    lv_obj_set_style_pad_right(color_cont, disp_size == DISP_SMALL ? LV_DPX(47) : LV_DPX(55), 0);
    lv_obj_set_style_bg_opa(color_cont, LV_OPA_COVER, 0);
    lv_obj_set_style_radius(color_cont, LV_RADIUS_CIRCLE, 0);

    if(disp_size == DISP_SMALL) lv_obj_set_size(color_cont, LV_DPX(52), LV_DPX(52));
    else lv_obj_set_size(color_cont, LV_DPX(60), LV_DPX(60));

    lv_obj_align(color_cont, LV_ALIGN_BOTTOM_RIGHT, - LV_DPX(10),  - LV_DPX(10));

    uint32_t i;
    for(i = 0; palette[i] != _LV_PALETTE_LAST; i++) {
        lv_obj_t * c = lv_btn_create(color_cont);
        lv_obj_set_style_bg_color(c, lv_palette_main(palette[i]), 0);
        lv_obj_set_style_radius(c, LV_RADIUS_CIRCLE, 0);
        lv_obj_set_style_opa(c, LV_OPA_TRANSP, 0);
        lv_obj_set_size(c, 20, 20);
        lv_obj_add_event_cb(c, color_event_cb, LV_EVENT_ALL, &palette[i]);
        lv_obj_clear_flag(c, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    }

    lv_obj_t * btn = lv_btn_create(parent);
    lv_obj_add_flag(btn, LV_OBJ_FLAG_FLOATING | LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_bg_color(btn, lv_color_white(), LV_STATE_CHECKED);
    lv_obj_set_style_pad_all(btn, 10, 0);
    lv_obj_set_style_radius(btn, LV_RADIUS_CIRCLE, 0);
    lv_obj_add_event_cb(btn, color_changer_event_cb, LV_EVENT_ALL, color_cont);
    lv_obj_set_style_shadow_width(btn, 0, 0);
    lv_obj_set_style_bg_img_src(btn, LV_SYMBOL_TINT, 0);

    if(disp_size == DISP_SMALL) {
         lv_obj_set_size(btn, LV_DPX(42), LV_DPX(42));
         lv_obj_align(btn, LV_ALIGN_BOTTOM_RIGHT, -LV_DPX(15), -LV_DPX(15));
     } else {
         lv_obj_set_size(btn, LV_DPX(50), LV_DPX(50));
         lv_obj_align(btn, LV_ALIGN_BOTTOM_RIGHT, -LV_DPX(15), -LV_DPX(15));
     }
}

static void color_changer_anim_cb(void * var, int32_t v)
{
    lv_obj_t * obj = var;
    lv_coord_t max_w = lv_obj_get_width(lv_obj_get_parent(obj)) - LV_DPX(20);
    lv_coord_t w;

    if(disp_size == DISP_SMALL) {
        w = lv_map(v, 0, 256, LV_DPX(52), max_w);
        lv_obj_set_width(obj, w);
        lv_obj_align(obj, LV_ALIGN_BOTTOM_RIGHT, - LV_DPX(10),  - LV_DPX(10));
    } else {
        w = lv_map(v, 0, 256, LV_DPX(60), max_w);
        lv_obj_set_width(obj, w);
        lv_obj_align(obj, LV_ALIGN_BOTTOM_RIGHT, - LV_DPX(10),  - LV_DPX(10));
    }

    if(v > LV_OPA_COVER) v = LV_OPA_COVER;

    uint32_t i;
    for(i = 0; i < lv_obj_get_child_cnt(obj); i++) {
        lv_obj_set_style_opa(lv_obj_get_child(obj, i), v, 0);
    }

}

static void color_changer_event_cb(lv_event_t *e)
{
    if(lv_event_get_code(e) == LV_EVENT_CLICKED) {
        lv_obj_t * color_cont = lv_event_get_user_data(e);
        if(lv_obj_get_width(color_cont) < LV_HOR_RES / 2) {
            lv_anim_t a;
            lv_anim_init(&a);
            lv_anim_set_var(&a, color_cont);
            lv_anim_set_exec_cb(&a, color_changer_anim_cb);
            lv_anim_set_values(&a, 0, 256);
            lv_anim_set_time(&a, 200);
            lv_anim_start(&a);
        } else {
            lv_anim_t a;
            lv_anim_init(&a);
            lv_anim_set_var(&a, color_cont);
            lv_anim_set_exec_cb(&a, color_changer_anim_cb);
            lv_anim_set_values(&a, 256, 0);
            lv_anim_set_time(&a, 200);
            lv_anim_start(&a);
        }
    }
}
static void color_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);

    if(code == LV_EVENT_FOCUSED) {
        lv_obj_t * color_cont = lv_obj_get_parent(obj);
        if(lv_obj_get_width(color_cont) < LV_HOR_RES / 2) {
            lv_anim_t a;
            lv_anim_init(&a);
            lv_anim_set_var(&a, color_cont);
            lv_anim_set_exec_cb(&a, color_changer_anim_cb);
            lv_anim_set_values(&a, 0, 256);
            lv_anim_set_time(&a, 200);
            lv_anim_start(&a);
        }
    }
    else if(code == LV_EVENT_CLICKED) {
        lv_palette_t * palette_primary = lv_event_get_user_data(e);
        lv_palette_t palette_secondary = (*palette_primary) + 3; /*Use an other palette as secondary*/
        if(palette_secondary >= _LV_PALETTE_LAST) palette_secondary = 0;

        lv_theme_default_init(NULL, lv_palette_main(*palette_primary), lv_palette_main(palette_secondary), LV_THEME_DEFAULT_DARK, font_normal);

        lv_color_t color = lv_palette_main(*palette_primary);
        lv_style_set_text_color(&style_icon, color);
        lv_chart_set_series_color(chart1, ser1, color);
        lv_chart_set_series_color(chart2, ser3, color);
    }
}

#if 0
static void ip_status_timer_cb(lv_timer_t * timer){
	lv_obj_t *ip_label_info = timer->user_data;
	char *ip_address = GetIPAdddress();
	if (ip_address != NULL){
		lv_label_set_text(ip_label_info, &ip_address[4]);
	}else{
		lv_label_set_text(ip_label_info, "0.0.0.0");
	}
}
#endif

void ip_async_set_address(void *ip_address){
	char *text = ip_address;

	lv_label_set_text(ip_label_info, text);
}

void ip_set_address(void){
	char *ip_address = GetIPAdddress();
	if (ip_address != NULL){
		lv_async_call(ip_async_set_address, (void *)&ip_address[4]);
	}else{
		lv_async_call(ip_async_set_address, (void *)"0.0.0.0");
	}
}

#if 0
uint32_t Server_GetState(void);
static void server_status_timer_cb(lv_timer_t * timer){
	lv_obj_t * server_label_info = timer->user_data;
	char *text;

	uint32_t server_state = Server_GetState();
	switch (server_state){
		case SERVER_DOWN:
			text = "Server Down";
			break;
		case SOCKET_ERROR:
			text = "Socket Error";
			break;
		case BIND_ERROR:
			text = "Bind Error";
			break;
		case LISTEN_ERROR:
			text = "Listen Error";
			break;
		case LISTENING:
			text = "Listening port 4712";
			break;
		case ACCEPT_ERROR:
			text = "Accept Error";
			break;
		case PDC_CONNECTED:
			text = "Connected to the PDC";
			break;
		case UDP_BROADCASTING:
			text = "Broadcasting on port 4713";
			break;
		default:
			text = "Unkwown";
			break;
	}

	lv_label_set_text(server_label_info, text);
}
#endif

void gps_async_set_status(void *state){
	char *text;
	uint32_t gps_state = (uint32_t)state;
	if (gps_state == 1){
		text = "Connected";
	}else{
		text = "Disconnected";
	}

	lv_label_set_text(gps_label_info, text);
}

void gps_set_status(uint32_t gps_state){
	lv_async_call(gps_async_set_status, (void *)gps_state);
}

void gps_protocol_async_set_status(void *protocol){
	char *text;
	uint32_t gps_protocol = (uint32_t)protocol;
	if (gps_protocol == 1){
		text = "NMEA";
	}else{
		text = "UBX";
	}

	lv_label_set_text(gps_protocol_info, text);
}

void gps_protocol_set_status(uint32_t gps_protocol){
	lv_async_call(gps_protocol_async_set_status, (void *)gps_protocol);
}

void gps_async_update_timestamp(void *SOC){

	//struct tm * my_time;
	//my_time = localtime((time_t *)SOC);
	//struct tm tm = *localtime((time_t *){SOC});
	//strftime(buff, sizeof(buff), "%T %F", &tm);
}

/* Update time stamp in the GUI */
void gps_update_timestamp(unsigned long SOC){
	lv_async_call(gps_async_update_timestamp,(void *)SOC);
}

void server_async_set_status(void *state){
	char *text;
	uint32_t server_state = (uint32_t)state;
	switch (server_state){
		case SERVER_DOWN:
			text = "Server Down";
			break;
		case SOCKET_ERROR:
			text = "Socket Error";
			break;
		case BIND_ERROR:
			text = "Bind Error";
			break;
		case LISTEN_ERROR:
			text = "Listen Error";
			break;
		case LISTENING:
			text = "Listening port 4712";
			break;
		case ACCEPT_ERROR:
			text = "Accept Error";
			break;
		case PDC_CONNECTED:
			text = "Connected to the PDC";
			break;
		case UDP_BROADCASTING:
			text = "Broadcasting on port 4713";
			break;
		default:
			text = "Unkwown";
			break;
	}

	lv_label_set_text(server_label_info, text);
}

void server_set_status(uint32_t server_state){
	lv_async_call(server_async_set_status, (void *)server_state);
}


void dhcp_async_set_status(void *state){
	char *text;
	uint32_t dhcp_state = (uint32_t)state;
	switch (dhcp_state){
		case DHCP_IFDOWN:
			text = "Interface Down";
			break;
		case DHCP_CABLE_DISCONNECTED:
			text = "Cable Disconnected";
			break;
		case DHCP_CABLE_CONNECTED:
			text = "Cable Connected";
			break;
		case DHCP_WAIT_FOR_ADDRESS:
			text = "Waiting for IP address";
			break;
		case DHCP_DONE:
			text = "Connected - IP address acquired";
			break;
		default:
			text = "Unkwown";
			break;
	}

	lv_label_set_text(status_label_info, text);
}

void dhcp_set_status(uint32_t dhcp_state){
	lv_async_call(dhcp_async_set_status, (void *)dhcp_state);
}

#if 0
int32_t dhcp_set_status(uint32_t dhcp_state){

	if (status_label_info != NULL){
		char *text;
		switch (dhcp_state){
			case DHCP_IFDOWN:
				text = "Interface Down";
				break;
			case DHCP_CABLE_DISCONNECTED:
				text = "Cable Disconnected";
				break;
			case DHCP_CABLE_CONNECTED:
				text = "Cable Connected";
				break;
			case DHCP_WAIT_FOR_ADDRESS:
				text = "Waiting for IP address";
				break;
			case DHCP_DONE:
				text = "Connected - IP address acquired";
				break;
			default:
				text = "Unkwown";
				break;
		}

		if (xSemaphoreTake(GUI_mutex, 100) == pdTRUE){
			lv_label_set_text(status_label_info, text);
			xSemaphoreGive(GUI_mutex);
			return 0;
		}else{
			return -1;
		}
	}else{
		return -1;
	}
}
#endif
