//
//  Customer_Curation_Sale_Gallery.cpp
//  ArtGallerySimplified
//
//  implement/define the member functions of the following classes:
//     1. class Customer; 2. class Curation; 3. class Sale; 4. class ArtGallery
//
// created by: [your name]
// date:

#include "Customer_Curation_Sale_Gallery.h"

namespace NS_ARTGALLERY
{

    //  implement/define the member functions of the following classes:
    //     1. class Customer; 2. class Curation; 3. class Sale; 4. class ArtGallery

    // Customer functions
    void Customer::setID(int theID)
    {
        ID = theID;
    }
    void Customer::setName(string theName)
    {
        name = theName;
    }
    void Customer::setEmail(string theEmail)
    {
        email = theEmail;
    }
    void Customer::setAddress(string theAddress)
    {
        address = theAddress;
    }

    // Curation functions
    void Curation::setArtworkID(int theID)
    {
        artworkID = theID;
    }
    void Curation::setArtistID(int theID)
    {
        artistID = theID;
    }
    void Curation::setCurationDate(Date theDate)
    {
        curationDate = theDate;
    }

    // Sale functions
    void Sale::setCustomerID(int theID)
    {
        customerID = theID;
    }
    void Sale::setArtworkID(int theID)
    {
        artworkID = theID;
    }
    void Sale::setSaleDate(Date theDate)
    {
        saleDate = theDate;
    }

} // end of NS_ARTGALLERY