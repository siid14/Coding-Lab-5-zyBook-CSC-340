//
//  Artwork_Artist.cpp
//  ArtGallerySimplified
//
//  implement/define the functions declared in "Artwork_Artist.h"
//
// created by [ your name ]
// date:

#include "Artwork_Artist.h"

namespace NS_ARTGALLERY
{

    //*** implement all the functions declared in "Artwork_Artist.h"

    // Artwork functions
    void Artwork::setID(int newID)
    {
        ID = newID;
    }
    void Artwork::setArtistID(int newID)
    {
        artistID = newID;
    }
    void Artwork::setType(ArtType theType)
    {
        type = theType;
    }
    void Artwork::setStyle(ArtStyle theStyle)
    {
        style = theStyle;
    }
    void Artwork::setSubject(ArtSubject theSubject)
    {
        subject = theSubject;
    }
    void Artwork::setYearMade(int year)
    {
        yearMade = year;
    }
    void Artwork::setDimension(double w, double h, double d)
    {
        width = w;  // in inches
        height = h; // in inches
        depth = d;
    }
    void Artwork::setPrice(double thePrice)
    {
        price = thePrice;
    }

    // Artist functions
    void Artist::setID(int theID)
    {
        ID = theID;
    }
    void Artist::setName(string theName)
    {
        name = theName;
    }
    void Artist::setEmail(string theEmail)
    {
        email = theEmail;
    }
    void Artist::setBirthYear(int theYear)
    {
        birthYear = theYear;
    }
    void Artist::setBirthPlace(string thePlace)
    {
        birthPlace = thePlace;
    }
    void Artist::setPrimaryArtType(ArtType theType)
    {
        primaryArtType = theType;
    }

} // end-of NS_ARTGALLERY