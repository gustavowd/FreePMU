/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 9.00
* Profile  : STM32F769
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef _GraphicsPath_H
#define _GraphicsPath_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x00090000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x00090000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

/* Forward declaration of the class Graphics::Path */
#ifndef _GraphicsPath_
  EW_DECLARE_CLASS( GraphicsPath )
#define _GraphicsPath_
#endif


/* The class Graphics::Path provides functionality to create and store curve data. 
   Every path object can contain one or more sub-paths. In turn, every sub-path 
   can be individually composed of line segments, Bézier curves, elliptical arcs 
   or even circles. In this manner complex polygons and paths can be constructed 
   easily.
   With the path information the curves can be displayed on the screen. The view 
   Views::FillPath displays the path as filled polygon. The view Views::StrokePath 
   displays the path as a line with specified width.
   The methods of the class Graphics::Paths can be divided in following groups:
   - To specify how many sub-paths the path should be able to manage use the method 
   @SetMaxNoOfSubPaths(). To reserve memory for a sub-path use the method @InitSubPath().
   - With the method @Begin() the start position for a sub-path can be determined 
   or existing sub-path data can be cleared again. In turn, with the method @Close() 
   a sub-path can be closed so its end and start positions appear connected together.
   - With the methods @AddLine(), @AddBezier2(), @AddBezier3() and @AddArc() new 
   line segments or even complex curves are added to the sub-path. With the method 
   @AddCopy() a duplicate of another existing sub-path can be added.
   - With the method @SetNode() the previously prepared sub-path data can be modified. 
   Similarly by using the methods @GetNodeX() and @GetNodeY() the X, Y coordinates 
   stored in the path can be evaluated. The method @ShiftNodes() is convenient to 
   delete old nodes before new nodes are appended.
   - The methods @InitMatrix(), @Translate(), @Scale(), @Rotate(), @PushMatrix() 
   and @PopMatrix() manage a 2D transformation matrix used to convert the original 
   coordinates of the lines and curves when adding them to the path. */
EW_DEFINE_FIELDS( GraphicsPath, XObject )
  EW_VARIABLE( path,            XHandle )
EW_END_OF_FIELDS( GraphicsPath )

/* Virtual Method Table (VMT) for the class : 'Graphics::Path' */
EW_DEFINE_METHODS( GraphicsPath, XObject )
EW_END_OF_METHODS( GraphicsPath )

/* 'C' function for method : 'Graphics::Path.onUpdate()' */
void GraphicsPath_onUpdate( GraphicsPath _this, XObject sender );

/* 'C' function for method : 'Graphics::Path.Done()' */
void GraphicsPath_Done( GraphicsPath _this );

/* The method GetNodeY() returns the Y coordinate stored in the node with the number 
   aNodeNo of the sub-path with the number aSubPathNo. In this manner it is possible 
   to evalute the complete sub-path information. The nodes within a sub-path are 
   numbered starting with the value 0 for the first node, 1 for the second and so 
   far. In total a sub-path contains @GetNoOfEdges() + 1 nodes.
   The returned Y coordinate is relative to the origin of the path coordinate system. 
   If the desired sub-path or node is not available, the method returns 0.0.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
XFloat GraphicsPath_GetNodeY( GraphicsPath _this, XInt32 aSubPathNo, XInt32 aNodeNo );

/* The method GetNodeX() returns the X coordinate stored in the node with the number 
   aNodeNo of the sub-path with the number aSubPathNo. In this manner it is possible 
   to evalute the complete sub-path information. The nodes within a sub-path are 
   numbered starting with the value 0 for the first node, 1 for the second and so 
   far. In total a sub-path contains @GetNoOfEdges() + 1 nodes.
   The returned X coordinate is relative to the origin of the path coordinate system. 
   If the desired sub-path or node is not available, the method returns 0.0.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
XFloat GraphicsPath_GetNodeX( GraphicsPath _this, XInt32 aSubPathNo, XInt32 aNodeNo );

/* The method SetNode() modifies in the sub-path with the number aSubPathNo the 
   coordinate of the node with the number aNodeNo. In this manner it is not necessary 
   to re-initialize and re-calculate the complete sub-path if the position of only 
   few corners do change. The nodes within a sub-path are numbered starting with 
   the value 0 for the first node, 1 for the second and so far. In total a sub-path 
   contains @GetNoOfEdges() + 1 nodes.
   The specified position aX, aY is relative to the origin of the path coordinate 
   system. If the path own matrix is not an identity matrix, the corresponding transformations 
   are applied on the position before storing it in the sub-path. See methods @Translate(), 
   @Scale() and @Rotate().
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
void GraphicsPath_SetNode( GraphicsPath _this, XInt32 aSubPathNo, XInt32 aNodeNo, 
  XFloat aX, XFloat aY );

/* The method AddLine() appends between the actual position of the sub-path and 
   the position aX, aY a new straight line segment consisting of one edge. Then 
   the sub-path actual position is adjusted to refer to the end of the just added 
   line segment (aX, aY).
   Within a sub-path the actual position is either the end position of the preceding 
   sub-path segment or it is the value specified in the invocation of the @Begin() 
   method. If the sub-path is empty and no start position has been specified in 
   the preceding @Begin() invocation, the method assumes the origin of the path 
   coordinate system (X=0, Y=0) as the start position for the new line segment.
   The specified position aX, aY is relative to the origin of the path coordinate 
   system. If the path own matrix is not an identity matrix, the corresponding transformations 
   are applied on the position before storing it in the sub-path. See methods @Translate(), 
   @Scale() and @Rotate().
   The method returns the index of the node within the sub-path where the end position 
   of the new line segment has been stored. Knowing this index, the position can 
   be modified later by using the method @SetNode().
   If the sub-path has not been initialized previously by using the method @InitSubPath(), 
   the sub-path has been closed by @Close() method or the entire memory reserved 
   for the sub-path (see parameter aMaxNoOfEdges in the method @InitSubPath()) is 
   already occupied by other edges, the method fails and returns 0.
   The affected sub-path is determined in the parameter aSubPathNo. Within the path 
   all existing sub-paths are numbered starting with the value 0 for the first sub-path, 
   1 for the second and so far. The maximum number of sub-paths the path can manage 
   is determined by the method @SetMaxNoOfSubPaths(). */
XInt32 GraphicsPath_AddLine( GraphicsPath _this, XInt32 aSubPathNo, XFloat aX, XFloat 
  aY );

/* The method ShiftNodes() removes from the affected sub-path the specified number 
   of leading coordinate values. This results in the sub-path content being shifted 
   and the number of sub-path edges being reduced by the given aNoOfNodes parameter. 
   Thereupon new edge data can be appended to the path, e.g. by using the method 
   @AddLine(). With the parameters aTranslateX and aTranslateY the remaining coordinates 
   can additionally be adjusted (translated). The values aTranslateX and aTranslateY 
   are simply added to all X,Y values of all coordinates.
   Applying the method on a sub-path closed by a preceding @Close() invocation is 
   not possible and causes the method to return without any modification on the 
   sub-path data. Moreover, the operation is limited to leave at least one node 
   in the sub-path. In other words, it is not possible to clear the path completely. 
   Use the methods @Begin() or @InitSubPath() in such application cases.
   The method returns the number of nodes removed from the sub-path or 0 if the 
   sub-path doesn't exist, is not initialized (see @InitSubPath()), is empty or 
   it has been closed by preceding @Close() invocation.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
XInt32 GraphicsPath_ShiftNodes( GraphicsPath _this, XInt32 aSubPathNo, XInt32 aNoOfNodes, 
  XFloat aTranslateX, XFloat aTranslateY );

/* The method Begin() sets the parameters aX, aY as the start position for the sub-path 
   with the specified number aSubPathNo. The affected sub-path has to be initialized 
   previously by invoking the method @InitSubPath(). Beginning with the specified 
   position, the path can be filled with curve data by using methods like @AddLine(), 
   @AddBezier2(), @AddArc(), etc.
   The specified position aX, aY is relative to the origin of the path coordinate 
   system. If the path own matrix is not an identity matrix, the corresponding transformations 
   are applied on the position before storing it in the sub-path. See methods @Translate(), 
   @Scale() and @Rotate().
   Every sub-path contains exact one start position. Calling this method for a sub-path 
   being already filled with edge coordinates will clear the actual sub-path as 
   if the @InitSubPath() method has been called before.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
void GraphicsPath_Begin( GraphicsPath _this, XInt32 aSubPathNo, XFloat aX, XFloat 
  aY );

/* The method InitSubPath() prepares the sub-path with the number aSubPathNo to 
   be able to store up to aMaxNoOfEdges path edges (straight line segments). With 
   this operation memory for the sub-path data is reserved. Initially the just initialized 
   sub-path is considered as being empty. To fill the sub-path with data use the 
   methods like @AddLine(), @AddBezier2(), @AddArc(), etc.
   If the affected sub-path has been already initialized in the past, the old information 
   is discarded before initializing the new sub-path. Passing 0 (zero) in the parameter 
   aMaxNoOfEdges results in the old sub-path data being simply released without 
   allocating the memory for the new sub-path.
   If successful, the method returns 'true'. If there is no memory available for 
   the specified number of edges, the method fails and 'false' is returned leaving 
   the sub-path not initialized. Similarly, trying to initialize a sub-path not 
   existing in the path causes the method to return 'false'.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
XBool GraphicsPath_InitSubPath( GraphicsPath _this, XInt32 aSubPathNo, XInt32 aMaxNoOfEdges );

/* The method PopMatrix() restores the current state of the path own matrix from 
   its internal stack. The matrix has to be stored by the preceding invocation of 
   the @PushMatrix() method. If the matrix stack is already empty, the identity 
   matrix is loaded (see @InitMatrix()). The modification of the path matrix affects 
   all coordinates specified in subsequent invocations of methods like @Begin(), 
   @AddLine(), @AddBezier2(), etc. */
void GraphicsPath_PopMatrix( GraphicsPath _this );

/* The method PushMatrix() stores the current state of the path own matrix on an 
   internal stack. This is very useful during creation of complex paths. To restore 
   the matrix again use the method @PopMatrix(). */
void GraphicsPath_PushMatrix( GraphicsPath _this );

/* The method Scale() applies the given factors aScaleX and aScaleY to the path 
   own matrix. This corresponds to the scaling of the path coordinate system by 
   the given values in the X- and Y-direction. The modification of the path matrix 
   affects all coordinates specified in subsequent invocations of methods like @Begin(), 
   @AddLine(), @AddBezier2(), etc. */
void GraphicsPath_Scale( GraphicsPath _this, XFloat aScaleX, XFloat aScaleY );

/* The method InitMatrix() replaces the path own transformation matrix with the 
   identity matrix. With identity matrix, all coordinates specified in subsequent 
   invocations of methods like @Begin(), @AddLine(), @AddBezier2(), etc. are taken 
   over directly without any transformation being applied on them. */
void GraphicsPath_InitMatrix( GraphicsPath _this );

/* The method GetNoOfFreeEdges() returns how many edges (straight line segments) 
   can still be added to the sub-path with the given number aSubPathNo. The maximum 
   capacity (max. number of edges) one sub-path can store is determined in the @InitSubPath() 
   invocation.
   If the specified sub-path doesn't exist, it has not been initialized by using 
   the method @InitSubPath(), it has been closed in the meantime by using the method 
   @Close() or the sub-path is simply full, the method returns 0.
   Within the path the sub-paths are numbered starting with the value 0 for the 
   first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). How many 
   edges the given sub-path actually contains can be queried by using the method 
   @GetNoOfEdges(). */
XInt32 GraphicsPath_GetNoOfFreeEdges( GraphicsPath _this, XInt32 aSubPathNo );

/* The method GetNoOfEdges() returns how many edges (straight line segments) the 
   sub-path with the given number aSubPathNo actually does store. If the specified 
   sub-path doesn't exist, it has not been initialized by using the method @InitSubPath() 
   or it is still empty, the method returns 0.
   Within the path the sub-paths are numbered starting with the value 0 for the 
   first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
XInt32 GraphicsPath_GetNoOfEdges( GraphicsPath _this, XInt32 aSubPathNo );

/* The method GetMaxNoOfSubPaths() returns how many sub-paths the affected path 
   can maximally store. The returned value corresponds to the parameter passed in 
   the invocation of the @SetMaxNoOfSubPaths() method. */
XInt32 GraphicsPath_GetMaxNoOfSubPaths( GraphicsPath _this );

/* The method SetMaxNoOfSubPaths() changes the number of sub-paths the affected 
   path can maximally manage to the specified value aMaxNoOfSubPaths. After modifying 
   its size the affected path is empty. This means all contents of previously existing 
   sub-paths are discarded. Before new path data can be stored in a sub-path the 
   method @InitSubPath() should be called. Please note, if the size of the path 
   does already correspond to the parameter aMaxNoOfSubPaths, the path remains unaffected 
   and retains all existing contents.
   The method returns 'true' if the path could be initialized with the new size. 
   In case, there is no sufficient memory to store the desired number of sub-paths, 
   the method fails and returns 'false' leaving the path empty. */
XBool GraphicsPath_SetMaxNoOfSubPaths( GraphicsPath _this, XInt32 aMaxNoOfSubPaths );

#ifdef __cplusplus
  }
#endif

#endif /* _GraphicsPath_H */

/* Embedded Wizard */
