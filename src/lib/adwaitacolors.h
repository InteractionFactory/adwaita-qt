/*************************************************************************
 * Copyright (C) 2014 by Hugo Pereira Da Costa <hugo.pereira@free.fr>    *
 * Copyright (C) 2014-2018 Martin Bříza <m@rtinbriza.cz>                 *
 * Copyright (C) 2019-2020 Jan Grulich <jgrulich@redhat.com>             *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#ifndef ADWAITA_COLORS_H
#define ADWAITA_COLORS_H

#include "adwaita.h"
#include "adwaitaqt_export.h"

#include <QColor>

namespace Adwaita
{

class ADWAITAQT_EXPORT Colors
{
public:
    // Color adjustments
    static QColor alphaColor(QColor color, qreal alpha);
    static QColor darken(const QColor &color, qreal amount = 0.1);
    static QColor desaturate(const QColor &color, qreal amount = 0.1);
    static QColor lighten(const QColor &color, qreal amount = 0.1);
    static QColor mix(const QColor &c1, const QColor &c2, qreal bias = 0.5);
    static QColor transparentize(const QColor &color, qreal amount = 0.1);

    static QPalette disabledPalette(const QPalette &source, qreal ratio);
    // Color palette for each Adwaita variant
    static QPalette palette(ColorVariant variant = ColorVariant::Unknown);

    // Generic colors
    static QColor hoverColor(const StyleOptions &options);
    static QColor focusColor(const StyleOptions &options);
    static QColor negativeText(const StyleOptions &options);
    static QColor shadowColor(const StyleOptions &options);
    static QColor titleBarColor(const StyleOptions &options);
    static QColor titleBarTextColor(const StyleOptions &options);

    // Outline colors
    static QColor arrowOutlineColor(const StyleOptions &options);
    static QColor buttonOutlineColor(const StyleOptions &options);
    static QColor indicatorOutlineColor(const StyleOptions &options);
    static QColor frameOutlineColor(const StyleOptions &options);
    static QColor inputOutlineColor(const StyleOptions &options);
    static QColor sidePanelOutlineColor(const StyleOptions &options);
    static QColor sliderOutlineColor(const StyleOptions &options);

    // Background colors
    static QColor buttonBackgroundColor(const StyleOptions &options);
    static QColor checkBoxIndicatorColor(const StyleOptions &options);
    static QColor headerTextColor(const StyleOptions &options);
    static QColor indicatorBackgroundColor(const StyleOptions &options);
    static QColor frameBackgroundColor(const StyleOptions &options);
    static QColor scrollBarHandleColor(const StyleOptions &options);
    static QColor separatorColor(const StyleOptions &options);
    static QColor toolButtonColor(const StyleOptions &options);
    static QColor tabBarColor(const StyleOptions &options);
};

} // namespace Adwaita

#endif // ADWAITA_COLORS_H
