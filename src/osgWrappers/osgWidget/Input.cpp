// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Drawable>
#include <osgWidget/Input>
#include <osgWidget/Types>
#include <osgWidget/Widget>
#include <osgWidget/Window>
#include <osgWidget/WindowManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgWidget::Input)
	I_DeclaringFile("osgWidget/Input");
	I_BaseType(osgWidget::Label);
	I_ConstructorWithDefaults3(IN, const std::string &, x, "", IN, const std::string &, x, "", IN, unsigned, int, 20,
	                           ____Input__C5_std_string_R1__C5_std_string_R1__unsigned,
	                           "",
	                           "");
	I_Method1(void, parented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__parented__Window_P1,
	          "",
	          "");
	I_Method0(void, positioned,
	          Properties::VIRTUAL,
	          __void__positioned,
	          "",
	          "");
	I_Method1(bool, focus, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __bool__focus__WindowManager_P1,
	          "",
	          "");
	I_Method1(bool, unfocus, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __bool__unfocus__WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, keyUp, IN, int, x, IN, int, x, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __bool__keyUp__int__int__WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, keyDown, IN, int, x, IN, int, x, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __bool__keyDown__int__int__WindowManager_P1,
	          "",
	          "");
	I_Method1(void, setCursor, IN, osgWidget::Widget *, x,
	          Properties::NON_VIRTUAL,
	          __void__setCursor__Widget_P1,
	          "",
	          "");
	I_MethodWithDefaults1(unsigned int, calculateBestYOffset, IN, const std::string &, x, "qgl",
	                      Properties::NON_VIRTUAL,
	                      __unsigned_int__calculateBestYOffset__C5_std_string_R1,
	                      "",
	                      "");
	I_Method1(void, setXOffset, IN, osgWidget::point_type, xo,
	          Properties::NON_VIRTUAL,
	          __void__setXOffset__point_type,
	          "",
	          "");
	I_Method1(void, setYOffset, IN, osgWidget::point_type, yo,
	          Properties::NON_VIRTUAL,
	          __void__setYOffset__point_type,
	          "",
	          "");
	I_Method2(void, setXYOffset, IN, osgWidget::point_type, xo, IN, osgWidget::point_type, yo,
	          Properties::NON_VIRTUAL,
	          __void__setXYOffset__point_type__point_type,
	          "",
	          "");
	I_Method0(osg::Drawable *, getCursor,
	          Properties::NON_VIRTUAL,
	          __osg_Drawable_P1__getCursor,
	          "",
	          "");
	I_Method0(const osg::Drawable *, getCursor,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Drawable_P1__getCursor,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getXOffset,
	          Properties::NON_VIRTUAL,
	          __point_type__getXOffset,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getYOffset,
	          Properties::NON_VIRTUAL,
	          __point_type__getYOffset,
	          "",
	          "");
	I_Method0(osgWidget::XYCoord, getXYOffset,
	          Properties::NON_VIRTUAL,
	          __XYCoord__getXYOffset,
	          "",
	          "");
	I_ProtectedMethod1(void, _calculateSize, IN, const osgWidget::XYCoord &, x,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___calculateSize__C5_XYCoord_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, _calculateCursorOffsets,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___calculateCursorOffsets,
	                   "",
	                   "");
	I_SimpleProperty(osg::Drawable *, Cursor, 
	                 __osg_Drawable_P1__getCursor, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, XOffset, 
	                 __point_type__getXOffset, 
	                 __void__setXOffset__point_type);
	I_SimpleProperty(osgWidget::XYCoord, XYOffset, 
	                 __XYCoord__getXYOffset, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, YOffset, 
	                 __point_type__getYOffset, 
	                 __void__setYOffset__point_type);
END_REFLECTOR
