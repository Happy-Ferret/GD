/** \file
 *  Game Develop
 *  2008-2013 Florian Rival (Florian.Rival@gmail.com)
 */
#ifndef GDCORE_SKINHELPER_H
#define GDCORE_SKINHELPER_H
class wxRibbonBar;
class wxAuiManager;
class wxAuiNotebook;
class wxAuiToolBar;
class wxPropertyGrid;

namespace gd
{

/**
 * \brief Provide tool functions to easily apply the current skin or theme to controls supporting it.
 *
 * The skin are loaded from the configuration stored thanks to wxConfigBase. If you use a control supported by one of ApplyCurrentSkin function,
 * you should call it on your control after it has been created.
 *
 * \ingroup IDE
 * \ingroup wxTools
 */
class GD_CORE_API SkinHelper
{
public:

    /**
     * Customize the appearance of a wxRibbonBar.
     */
    static void ApplyCurrentSkin(wxRibbonBar & bar);

    /**
     * Customize the appearance of a wxAuiManager.
     */
    static void ApplyCurrentSkin(wxAuiManager & auiManager);

    /**
     * Customize the appearance of a wxAuiNotebook.
     */
    static void ApplyCurrentSkin(wxAuiNotebook & notebook);

    /**
     * Customize the appearance of a wxAuiToolBar.
     */
    static void ApplyCurrentSkin(wxAuiToolBar & toolbar);

    /**
     * Customize the appearance of a wxPropertyGrid.
     */
    static void ApplyCurrentSkin(wxPropertyGrid & propertyGrid);

private:
    SkinHelper();
    virtual ~SkinHelper();
};

}

#endif // GDCORE_SKINHELPER_H