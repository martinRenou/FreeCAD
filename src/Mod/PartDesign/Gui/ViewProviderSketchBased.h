/***************************************************************************
 *   Copyright (C) 2015 Alexander Golubev (Fat-Zer) <fatzer2@gmail.com>    *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef VIEWPROVIDERSKETCHBASED_H_QKP3UG9A
#define VIEWPROVIDERSKETCHBASED_H_QKP3UG9A

#include "ViewProviderAddSub.h"

namespace PartDesignGui {

/**
 * A common base class for Sketch based view providers
 */
class PartDesignGuiExport ViewProviderSketchBased : public ViewProvider
{
    PROPERTY_HEADER(PartDesignGui::ViewProviderSketchBased);

public:
    /// constructor
    ViewProviderSketchBased();
    /// destructor
    virtual ~ViewProviderSketchBased();

    /// grouping handling
    std::vector<App::DocumentObject*> claimChildren(void)const;

    virtual bool onDelete(const std::vector<std::string> &);

};

} /* PartDesignGui  */

#endif /* end of include guard: VIEWPROVIDERSKETCHBASED_H_QKP3UG9A */
