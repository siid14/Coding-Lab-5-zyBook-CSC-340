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

    // * Artwork functions
    int Artwork::getID() const
    {
        return ID;
    }
    int Artwork::getArtistID() const
    {
        return artistID;
    }
    ArtType Artwork::getType() const
    {
        return type;
    }
    ArtStyle Artwork::getStyle() const
    {
        return style;
    }
    ArtSubject Artwork::getSubject() const
    {
        return subject;
    }
    double Artwork::getYearMade() const
    {
        return yearMade;
    }
    double Artwork::getWidth() const
    {
        return width;
    }
    double Artwork::getHeight() const
    {
        return height;
    }
    double Artwork::getDepth() const
    {
        return depth;
    }
    double Artwork::getPrice() const
    {
        return price;
    }

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

    // * Artist functions
    int Artist::getID() const
    {
        return ID;
    }

    string Artist::getName() const
    {
        return name;
    }

    string Artist::getEmail() const
    {
        return email;
    }

    int Artist::getBirthYear() const
    {
        return birthYear;
    }

    string Artist::getBirthPlace() const
    {
        return birthPlace;
    }

    ArtType Artist::getPrimaryArtType() const
    {
        return primaryArtType;
    }

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