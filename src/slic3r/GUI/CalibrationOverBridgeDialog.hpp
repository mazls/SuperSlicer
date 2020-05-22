#ifndef slic3r_GUI_CalibrationOverBridgeDialog_hpp_
#define slic3r_GUI_CalibrationOverBridgeDialog_hpp_

#include "CalibrationAbstractDialog.hpp"

namespace Slic3r { 
namespace GUI {

class CalibrationOverBridgeDialog : public CalibrationAbstractDialog
{

public:
    CalibrationOverBridgeDialog(GUI_App* app, MainFrame* mainframe) : CalibrationAbstractDialog(app, mainframe, "Ironing pattern calibration") { std::cout << " html = /calibration/over-bridge_tuning/over-bridge_tuning.html\n"; create("/calibration/over-bridge_tuning/over-bridge_tuning.html"); }
    virtual ~CalibrationOverBridgeDialog() { }
    
protected:
    void create_buttons(wxStdDialogButtonSizer* sizer) override;
    void create_geometry(wxCommandEvent& event_args);

};

} // namespace GUI
} // namespace Slic3r

#endif
