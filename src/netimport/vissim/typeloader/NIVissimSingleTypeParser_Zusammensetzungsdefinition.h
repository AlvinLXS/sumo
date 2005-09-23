#ifndef NIVissimSingleTypeParser_Zusammensetzungsdefinition_h
#define NIVissimSingleTypeParser_Zusammensetzungsdefinition_h
/***************************************************************************
    NIVissimSingleTypeParser_Zusammensetzungsdefinition.h

                             -------------------
    begin                : Wed, 18 Dec 2002
    copyright            : (C) 2001 by DLR/IVF http://ivf.dlr.de/
    author               : Daniel Krajzewicz
    email                : Daniel.Krajzewicz@dlr.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
// $Log$
// Revision 1.3  2005/09/23 06:02:58  dkrajzew
// SECOND LARGE CODE RECHECK: converted doubles and floats to SUMOReal
//
// Revision 1.2  2005/04/27 12:24:39  dkrajzew
// level3 warnings removed; made netbuild-containers non-static
//
// Revision 1.1  2003/04/09 15:53:26  dkrajzew
// netconvert-changes: further work on Vissim-import, documentation added
//
// Revision 1.1  2003/02/07 11:08:42  dkrajzew
// Vissim import added (preview)
//
/* =========================================================================
 * compiler pragmas
 * ======================================================================= */
#pragma warning(disable: 4786)


/* =========================================================================
 * included modules
 * ======================================================================= */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif // HAVE_CONFIG_H

#include <iostream>
#include "../NIVissimLoader.h"


/* =========================================================================
 * class definitions
 * ======================================================================= */
/**
 * @class NIVissimSingleTypeParser_Zusammensetzungsdefinition
 *
 */
class NIVissimSingleTypeParser_Zusammensetzungsdefinition :
        public NIVissimLoader::VissimSingleTypeParser {
public:
    /// Constructor
    NIVissimSingleTypeParser_Zusammensetzungsdefinition(NIVissimLoader &parent);

    /// Destructor
    ~NIVissimSingleTypeParser_Zusammensetzungsdefinition();

    /// Parses the data type from the given stream
    bool parse(std::istream &from);

};

/**************** DO NOT DECLARE ANYTHING AFTER THE INCLUDE ****************/

#endif

// Local Variables:
// mode:C++
// End:
