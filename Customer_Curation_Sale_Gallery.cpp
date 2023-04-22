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

    // Gallery functions
    int Gallery::getArtistID(string name, string email) const
    {
    }
    int Gallery::getCustomerID(string name, string email) const
    {
    }
    vector<int> Gallery::getIDsOfArtworksForSale() const
    {
    }
    vector<int> Gallery::getIDsOfArtistsForSale() const
    {
    }
    vector<pair<string, int>> Gallery::genArtworksReport(ReportType reportType)
    {
    }
    void Gallery::setID(int theID)
    {
        ID = theID;
    }
    void Gallery::setName(string theName)
    {
        name = theName
    }
    void Gallery::setAddress(string theAddr)
    {
        address = theAddr;
    }
    void Gallery::setWebURL(string theURL)
    {
        webURL = theURL;
    }
    int Gallery::addArtist(Artist artist)
    {
        }
    int Gallery::addCustomer(Customer customer)
    {
    }
    void Gallery::curateArtwork(Artwork newItem, Artist artist)
    {
    }
    void Gallery::sellArtwork(int artworkID, Customer customer)
    {
    }

} // end of NS_ARTGALLERY