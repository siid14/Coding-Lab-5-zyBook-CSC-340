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

    // * Customer functions

    int Customer::getID() const
    {
        return ID;
    }

    string Customer::getName() const
    {
        return name;
    }

    string Customer::getEmail() const
    {
        return email;
    }

    string Customer::getAddress() const
    {
        return address;
    }

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

    // * Curation functions

    int Curation::getArtworkID() const
    {
        return artworkID;
    }

    int Curation::getArtistID() const
    {
        return artistID;
    }

    Date Curation::getCurationDate() const
    {
        return curationDate;
    }
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

    // * Sale functions
    int Sale::getCustomerID() const
    {
        return customerID;
    }

    // return a sale's artworkID
    int Sale::getArtworkID() const
    {
        return artworkID;
    }

    // return a sale's date
    Date Sale::getSaleDate() const
    {
        return saleDate;
    }

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

    // * Gallery functions

    int Gallery::getID() const
    {
        return ID;
    }
    string Gallery::getName() const
    {
        return name;
    }
    string Gallery::getAddress() const
    {
        return address;
    }
    string Gallery::getWebURL() const
    {
        return webURL;
    }

    unsigned long Gallery::num_artists() const
    {
        return artistsList.size();
    }
    unsigned long Gallery::num_artworksCurated() const
    {
        return artworksCurated.size();
    }
    unsigned long Gallery::num_artworksForSale() const
    {
        return artworksForSale.size();
    }
    unsigned long Gallery::num_customers() const
    {
        return customersList.size();
    }
    unsigned long Gallery::num_curations() const
    {
        return curationsRecords.size();
    }
    unsigned long Gallery::num_sales() const
    {
        return salesRecords.size();
    }

    int Gallery::getArtistID(string name, string email) const
    {
        for (auto artist : artistsList)
        {
            if (artist.Artist::getName() == name && artist.Artist::getEmail() == email)
            {
                return artist.Artist::getID();
            }
            else
                return -1;
        }
    }

    int Gallery::getCustomerID(string name, string email) const
    {
        for (auto customer : customersList)
        {
            if (customer.Customer::getName() == name && customer.Customer::getEmail() == email)
            {
                return customer.Customer::getID();
            }
            else
                return -1;
        }
    }
    vector<int> Gallery::getIDsOfArtworksForSale() const
    {
        for (auto artwork : artworksForSale)
        {
            cout << artwork.Artwork::getID() << "\n";
        }
    }
    vector<int> Gallery::getIDsOfArtistsForSale() const
    {
        for (auto artwork : artworksForSale)
        {
            cout << artwork.Artwork::getArtistID() << "\n";
        }
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
        name = theName;
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
    void Gallery::addCuration(Curation curation)
    {
    }
    void Gallery::addSale(Sale sale)
    {
    }

} // end of NS_ARTGALLERY