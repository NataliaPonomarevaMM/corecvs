/**
 * \file graphPlotParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from graphPlot.xml
 */

#include <vector>
#include <stddef.h>
#include "graphPlotParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
#if 0
template<>
Reflection BaseReflection<GraphPlotParameters>::reflection = Reflection();
template<>
int BaseReflection<GraphPlotParameters>::dummy = GraphPlotParameters::staticInit();
#endif
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int GraphPlotParameters::staticInit(corecvs::Reflection *toFill)
{
    if (toFill == NULL || toFill->objectSize != 0) {
        SYNC_PRINT(("staticInit(): Contract Violation in <GraphPlotParameters>\n"));
         return -1;
    }

    toFill->name = ReflectionNaming(
        "Graph Plot Parameters",
        "Graph Plot Parameters",
        ""
    );

     toFill->objectSize = sizeof(GraphPlotParameters);
     

    EnumField* field0 = new EnumField
        (
          GraphPlotParameters::GRAPHSTYLE_ID,
          offsetof(GraphPlotParameters, mGraphStyle),
          0,
          "graphStyle",
          "graphStyle",
          "graphStyle",
          new EnumReflection(2
          , new EnumOption(0,"Draw Lines")
          , new EnumOption(1,"Draw Dots")
          )
        );
    field0->widgetHint=BaseField::COMBO_BOX;
    toFill->fields.push_back(field0);
    /*  */ 
    IntField* field1 = new IntField
        (
          GraphPlotParameters::WIDTH_ID,
          offsetof(GraphPlotParameters, mWidth),
          1,
          "width",
          "width",
          "width",
          true,
         1,
         99,
         1
        );
    toFill->fields.push_back(field1);
    /*  */ 
    DoubleField* field2 = new DoubleField
        (
          GraphPlotParameters::CENTERAT_ID,
          offsetof(GraphPlotParameters, mCenterAt),
          0,
          "centerAt",
          "centerAt",
          "centerAt",
          true,
         -9999,
         9999.99,
         1
        );
    field2->widgetHint=BaseField::SPIN_BOX;
    field2->precision=2;
    toFill->fields.push_back(field2);
    /*  */ 
    BoolField* field3 = new BoolField
        (
          GraphPlotParameters::XGRID_ID,
          offsetof(GraphPlotParameters, mXGrid),
          false,
          "xGrid",
          "xGrid",
          "xGrid"
        );
    field3->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field3);
    /*  */ 
    BoolField* field4 = new BoolField
        (
          GraphPlotParameters::YGRID_ID,
          offsetof(GraphPlotParameters, mYGrid),
          false,
          "yGrid",
          "yGrid",
          "yGrid"
        );
    field4->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field4);
    /*  */ 
    DoubleField* field5 = new DoubleField
        (
          GraphPlotParameters::XSCALE_ID,
          offsetof(GraphPlotParameters, mXScale),
          1,
          "xScale",
          "xScale",
          "xScale"
        );
    field5->widgetHint=BaseField::SLIDER;
    field5->precision=2;
    toFill->fields.push_back(field5);
    /*  */ 
    DoubleField* field6 = new DoubleField
        (
          GraphPlotParameters::YSCALE_ID,
          offsetof(GraphPlotParameters, mYScale),
          1,
          "yScale",
          "yScale",
          "yScale",
          true,
         0,
         1000,
         1
        );
    field6->widgetHint=BaseField::SLIDER;
    field6->precision=2;
    toFill->fields.push_back(field6);
    /*  */ 
    DoubleField* field7 = new DoubleField
        (
          GraphPlotParameters::CONTRAST_ID,
          offsetof(GraphPlotParameters, mContrast),
          50,
          "contrast",
          "contrast",
          "contrast",
          true,
         0,
         100,
         1
        );
    field7->widgetHint=BaseField::SPIN_BOX;
    field7->precision=2;
    toFill->fields.push_back(field7);
    /*  */ 
    BoolField* field8 = new BoolField
        (
          GraphPlotParameters::SELECTGRAPH_ID,
          offsetof(GraphPlotParameters, mSelectGraph),
          false,
          "selectGraph",
          "selectGraph",
          "selectGraph"
        );
    field8->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field8);
    /*  */ 
    BoolField* field9 = new BoolField
        (
          GraphPlotParameters::FIX_TIME_VALUE_ID,
          offsetof(GraphPlotParameters, mFixTimeValue),
          false,
          "Fix Time value",
          "Fix Time value",
          "Fix Time value"
        );
    field9->widgetHint=BaseField::RADIO_BUTTON;
    toFill->fields.push_back(field9);
    /*  */ 
    BoolField* field10 = new BoolField
        (
          GraphPlotParameters::FIX_GRID_VALUE_ID,
          offsetof(GraphPlotParameters, mFixGridValue),
          true,
          "Fix Grid value",
          "Fix Grid value",
          "Fix Grid value"
        );
    field10->widgetHint=BaseField::RADIO_BUTTON;
    toFill->fields.push_back(field10);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("Graph Plot Parameters")]= toFill;
   return 0;
}
int GraphPlotParameters::relinkCompositeFields()
{
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


