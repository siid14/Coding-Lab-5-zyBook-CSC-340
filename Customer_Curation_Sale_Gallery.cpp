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
        }
        return -1;
    }

    int Gallery::getCustomerID(string name, string email) const
    {
        for (auto customer : customersList)
        {
            if (customer.Customer::getName() == name && customer.Customer::getEmail() == email)
            {
                return customer.Customer::getID();
            }
        }
        return -1;
    }

    vector<int> Gallery::getIDsOfArtworksForSale() const
    {
        vector<int> IDsOfArtworksForSale;
        for (auto artwork : artworksForSale)
        {
            cout << artwork.Artwork::getID() << "\n";
            IDsOfArtworksForSale.push_back(artwork.Artwork::getID());
        }
        return IDsOfArtworksForSale;
    }

    vector<int> Gallery::getIDsOfArtistsForSale() const
    {
        vector<int> IDsOfArtistsForSale;
        for (auto artwork : artworksForSale)
        {
            cout << artwork.Artwork::getArtistID() << "\n";
        }
        return IDsOfArtistsForSale;
    }

    vector<pair<string, int>> Gallery::genArtworksReport(ReportType reportType)
    {
        vector<pair<string, int>> report;

        if (reportType == ReportType::artType)
        {
            int paintingCount = 0;
            int photographyCount = 0;
            int drawingCount = 0;
            int sculptureCount = 0;
            int otherCount = 0;

            for (auto &artwork : Gallery::artworksCurated)
            {
                switch (artwork.getType())
                {
                case ArtType::painting:
                    ++paintingCount;
                    break;
                case ArtType::photography:
                    ++photographyCount;
                    break;
                case ArtType::drawing:
                    ++drawingCount;
                    break;
                case ArtType::sculpture:
                    ++sculptureCount;
                    break;
                default:
                    ++otherCount;
                    break;
                }
            }

            report.push_back(make_pair(toStr_ArtType(ArtType::painting), paintingCount));
            report.push_back(make_pair(toStr_ArtType(ArtType::photography), photographyCount));
            report.push_back(make_pair(toStr_ArtType(ArtType::drawing), drawingCount));
            report.push_back(make_pair(toStr_ArtType(ArtType::sculpture), sculptureCount));
            report.push_back(make_pair(toStr_ArtType(ArtType::other), otherCount));
        }
        else if (reportType == ReportType::artStyle)
        {
            int fineArtCount = 0;
            int abstractCount = 0;
            int modernCount = 0;
            int popArtCount = 0;
            int otherCount = 0;

            for (auto &artwork : Gallery::artworksCurated)
            {
                switch (artwork.getStyle())
                {
                case ArtStyle::fineArt:
                    ++fineArtCount;
                    break;
                case ArtStyle::abstract:
                    ++abstractCount;
                    break;
                case ArtStyle::modern:
                    ++modernCount;
                    break;
                case ArtStyle::popArt:
                    ++popArtCount;
                    break;
                default:
                    ++otherCount;
                    break;
                }
            }

            report.push_back(make_pair(toStr_ArtStyle(ArtStyle::fineArt), fineArtCount));
            report.push_back(make_pair(toStr_ArtStyle(ArtStyle::abstract), abstractCount));
            report.push_back(make_pair(toStr_ArtStyle(ArtStyle::modern), modernCount));
            report.push_back(make_pair(toStr_ArtStyle(ArtStyle::popArt), popArtCount));
            report.push_back(make_pair(toStr_ArtStyle(ArtStyle::other), otherCount));
        }
        else if (reportType == ReportType::artSubject)
        {
            int natureCount = 0;
            int portraitCount = 0;
            int animalCount = 0;
            int cartoonCount = 0;
            int otherCount = 0;

            for (auto &artwork : Gallery::artworksCurated)
            {
                switch (artwork.getSubject())
                {
                case ArtSubject::nature:
                    ++natureCount;
                    break;
                case ArtSubject::portrait:
                    ++portraitCount;
                    break;
                case ArtSubject::animal:
                    ++animalCount;
                    break;
                case ArtSubject::cartoon:
                    ++cartoonCount;
                    break;
                default:
                    ++otherCount;
                    break;
                }
            }

            report.push_back(make_pair(toStr_ArtSubject(ArtSubject::nature), natureCount));
            report.push_back(make_pair(toStr_ArtSubject(ArtSubject::portrait), portraitCount));
            report.push_back(make_pair(toStr_ArtSubject(ArtSubject::animal), animalCount));
            report.push_back(make_pair(toStr_ArtSubject(ArtSubject::cartoon), cartoonCount));
            report.push_back(make_pair(toStr_ArtSubject(ArtSubject::other), otherCount));
        }

        return report;
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
        for (auto existingArtist : Gallery::artistsList)
        {

            // check if the artist is already on the artistList using their name and email
            if (existingArtist.getName() == artist.getName() && existingArtist.getEmail() == artist.getEmail())
            {
                return existingArtist.getID();
            }

            // Generate a unique ID for the artist
            static int artistID = uniqueIDs::next_artistID();

            // Set the artist's ID and add it to the list
            artist.setID(artistID);
            artistsList.push_back(artist);
        }
        return artist.getID(); // return artist's ID
    }

    int Gallery::addCustomer(Customer customer)
    {
        for (auto existingCustomer : Gallery::customersList)
        {
            // check if the customer is already on the artistList using their name and email
            if (existingCustomer.getName() == customer.getName() && existingCustomer.getEmail() == customer.getEmail())
            {
                return existingCustomer.getID();
            }

            // Generate a unique ID for the customer
            static int customerID = uniqueIDs::next_customerID();

            // Set the artist's ID and add it to the list
            customer.setID(customerID);
            customersList.push_back(customer);
        }
        return customer.getID(); // return customer's ID
    }

    void Gallery::curateArtwork(Artwork newItem, Artist artist)
    {
        // check if the artist is already on the artistList using their name and email
        auto it = std::find_if(artistsList.begin(), artistsList.end(),
                               [&](const Artist &existingArtist)
                               {
                                   return existingArtist.getName() == artist.getName() &&
                                          existingArtist.getEmail() == artist.getEmail();
                               });

        if (it != artistsList.end()) // artist is not new
        {
            artist.setID(it->getID()); // retrieve their ID from the artistList
        }
        else // artist is new
        {
            // generate a unique ID for the artist
            int artistID = uniqueIDs::next_artistID();

            artist.setID(artistID);        // set the artist's ID
            artistsList.push_back(artist); // add artist to artistsList
        }

        // assign newItem a unique ID
        int artworkID = uniqueIDs::next_artworkID();
        newItem.setID(artworkID);

        // add newItem to artworkListCurated and artworkListForSale
        artworksCurated.push_back(newItem);
        artworksForSale.push_back(newItem);

        // update curationRecords to include this new curation
        curationsRecords.push_back(Curation(newItem.getID(), artist.getID(), getTodaysDate()));
    }

    void Gallery::sellArtwork(int artworkID, Customer customer)
    {

        // check if the artwork is for sale
        auto it = std::find_if(artworksForSale.begin(), artworksForSale.end(),
                               [&](const Artwork &artwork)
                               {
                                   return artwork.getID() == artworkID;
                               });

        if (it != artworksForSale.end()) // artwork is for sale
        {
            // check if the customer is already on the customersList using their name and email
            auto it2 = std::find_if(customersList.begin(), customersList.end(),
                                    [&](const Customer &existingCustomer)
                                    {
                                        return existingCustomer.getName() == customer.getName() &&
                                               existingCustomer.getEmail() == customer.getEmail();
                                    });

            if (it2 != customersList.end()) // customer is not new
            {
                customer.setID(it2->getID()); // retrieve their ID from the customersList
            }
            else // customer is new
            {
                // generate a unique ID for the customer
                int customerID = uniqueIDs::next_customerID();

                customer.setID(customerID);        // set the customer's ID
                customersList.push_back(customer); // add customer to customersList
            }

            // update the sales records
            Sale newSale(customer.getID(), artworkID, newSale.getSaleDate());
            salesRecords.push_back(newSale);

            // remove the artwork from the artworkListForSale
            artworksForSale.erase(it);
        }
    }

    void Gallery::addCuration(Curation curation)
    {
        curationsRecords.push_back(curation);
    }

    void Gallery::addSale(Sale sale)
    {
        salesRecords.push_back(sale);
    }

} // end of NS_ARTGALLERY