#ifndef Fireworks_Core_FW3DViewGeometry_h
#define Fireworks_Core_FW3DViewGeometry_h
// -*- C++ -*-
//
// Package:     Core
// Class  :     FW3DViewGeometry
// 
/**\class FW3DViewGeometry FW3DViewGeometry.h Fireworks/Core/interface/FW3DViewGeometry.h

 Description: [one line class summary]

 Usage:
    <usage>

*/
//
// Original Author:  Alja Mrak-Tadel
//         Created:  Thu Mar 25 22:06:52 CET 2010
// $Id: FW3DViewGeometry.h,v 1.2 2010/09/06 13:37:13 yana Exp $
//

// system include files

// user include files
#include "TEveElement.h"

// forward declarations
class TEveScene;
class TEveElementList;
class FWGeometry;

namespace fireworks
{
   class Context;
}

class FW3DViewGeometry : public TEveElementList
{

public:
   FW3DViewGeometry( const fireworks::Context& context );
   virtual ~FW3DViewGeometry();

   // ---------- const member functions ---------------------

   // ---------- static member functions --------------------

   // ---------- member functions ---------------------------

   void showMuonBarrel( bool );
   void showMuonEndcap( bool );
   void showPixelBarrel( bool );
   void showPixelEndcap( bool );
   void showTrackerBarrel( bool );
   void showTrackerEndcap( bool );
   void setTransparency( int );
private:
   FW3DViewGeometry(const FW3DViewGeometry&); // stop default

   const FW3DViewGeometry& operator=(const FW3DViewGeometry&); // stop default

   // ---------- member data --------------------------------

   const fireworks::Context& m_context;
   const FWGeometry*  m_geom;

   TEveElementList*   m_muonBarrelElements;
   TEveElementList*   m_muonEndcapElements;
   TEveElementList*   m_pixelBarrelElements;
   TEveElementList*   m_pixelEndcapElements;
   TEveElementList*   m_trackerBarrelElements;
   TEveElementList*   m_trackerEndcapElements;

   int                m_geomTransparency;
};


#endif
