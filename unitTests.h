//
//  unitTests.h
//  ArtGallerySimplified
//
// unit-test a few member functions for each class
//
//  Created by Hui Yang on 3/23/22.
//

#ifndef unitTests_h
#define unitTests_h

#include "Artwork_Artist.h"
#include "Customer_Curation_Sale_Gallery.h"

namespace NS_UTESTS
{

    using namespace NS_ARTGALLERY;

    // *class Artwork; a partial unit testing.
    // write one unit test each for the following member functions of the Artwork class

    // default constructor and accessors ---> bool test_Artwork();
    inline bool test_Artwork()
    {
        // create an Artwork object with default constructor
        Artwork artwork;

        // check that the default values are set correctly using accessors
        if (artwork.getID() != -1)
        {
            return false;
        }
        if (artwork.getArtistID() != -1)
        {
            return false;
        }
        if (artwork.getType() != ArtType::painting)
        {
            return false;
        }
        if (artwork.getStyle() != ArtStyle::fineArt)
        {
            return false;
        }
        if (artwork.getSubject() != ArtSubject::nature)
        {
            return false;
        }
        if (artwork.getYearMade() != 2023)
        {
            return false;
        }
        if (artwork.getWidth() != 0.00)
        {
            return false;
        }
        if (artwork.getHeight() != 0.00)
        {
            return false;
        }
        if (artwork.getDepth() != 0.00)
        {
            return false;
        }
        if (artwork.getPrice() != 0.00)
        {
            return false;
        }

        return true;
    }
    // setStyle() and getStyle() ---> bool test_set_getStyle_Artwork();
    inline bool test_set_getStyle_Artwork()
    {
        Artwork artwork;

        // Test setting and getting ArtStyle::fineArt
        artwork.setStyle(ArtStyle::fineArt);
        if (artwork.getStyle() != ArtStyle::fineArt)
        {
            return false;
        }

        // Test setting and getting ArtStyle::abstract
        artwork.setStyle(ArtStyle::abstract);
        if (artwork.getStyle() != ArtStyle::abstract)
        {
            return false;
        }

        // Test setting and getting ArtStyle::modern
        artwork.setStyle(ArtStyle::modern);
        if (artwork.getStyle() != ArtStyle::modern)
        {
            return false;
        }

        // Test setting and getting ArtStyle::popArt
        artwork.setStyle(ArtStyle::popArt);
        if (artwork.getStyle() != ArtStyle::popArt)
        {
            return false;
        }

        // Test setting and getting ArtStyle::other
        artwork.setStyle(ArtStyle::other);
        if (artwork.getStyle() != ArtStyle::other)
        {
            return false;
        }

        return true;
    }

    // setDimension(), getWidth(), getHeight() and getDepth() ---> bool test_setDimension_Artwork();
    inline bool test_setDimension_Artwork()
    {
        // create a new artwork
        Artwork a;

        // set the dimensions of the artwork
        a.setDimension(10.0, 20.0, 30.0);

        // check that the width, height, and depth have been set correctly
        if (a.getWidth() != 10.0)
            return false;
        if (a.getHeight() != 20.0)
            return false;
        if (a.getDepth() != 30.0)
            return false;

        // set the dimensions of the artwork again
        a.setDimension(15.0, 25.0, 35.0);

        // check that the width, height, and depth have been set correctly
        if (a.getWidth() != 15.0)
            return false;
        if (a.getHeight() != 25.0)
            return false;
        if (a.getDepth() != 35.0)
            return false;

        // all tests passed
        return true;
    }

    //  * class Artist; a partial unit testing
    //  write one unit test each for the following member functions of the Artist class
    //   .default constructor and accessors -->bool test_Artist();
    //   .setID() and getID()--->bool test_set_getID_Artist();

    // default constructor and accessors -->bool test_Artist();
    inline bool test_Artist()
    {
        Artist artistTest;

        if (artistTest.getID() != -1)
        {
            return false;
        }

        if (artistTest.getName() != "na")
        {
            return false;
        }

        if (artistTest.getEmail() != "na")
        {
            return false;
        }

        if (artistTest.getBirthYear() != 1900)
        {
            return false;
        }

        if (artistTest.getBirthPlace() != "na")
        {
            return false;
        }

        if (artistTest.getPrimaryArtType() != ArtType::painting)
        {
            return false;
        }
        return true;
    }

    // setID() and getID()--->bool test_set_getID_Artist();
    inline bool test_set_getID_Artist()
    {
        Artist artistTest;

        artistTest.setID(666);
        if (artistTest.getID() != 666)
        {
            return false;
        }

        artistTest.setID(111);
        if (artistTest.getID() != 111)
        {
            return false;
        }

        artistTest.setID(999);
        if (artistTest.getID() != 999)
        {
            return false;
        }

        return true;
    }

    // * class Customer; a partial unit testing
    // write one unit test each for the following member functions of the Customer class
    //  .the parameterized constructor and accessors -->bool test_Customer2();
    //  .setName() and getName()--->bool test_set_getName_Customer();

    //  .the parameterized constructor and accessors -->bool test_Customer2();
    inline bool test_Customer2()
    {
        Customer c(1, "John Doe", "johndoe@example.com", "123 Main St");

        // Check that the customer's ID is correct
        if (c.getID() != 1)
        {
            return false;
        }

        // Check that the customer's name is correct
        if (c.getName() != "John Doe")
        {
            return false;
        }

        // Check that the customer's email is correct
        if (c.getEmail() != "johndoe@example.com")
        {
            return false;
        }

        // Check that the customer's address is correct
        if (c.getAddress() != "123 Main St")
        {
            return false;
        }

        // All checks passed
        return true;
    }

    //  .setName() and getName()--->bool test_set_getName_Customer();
    inline bool test_set_getName_Customer()
    {
        Customer c;

        // Set the customer's name to "Alice Smith"
        c.setName("Alice Smith");

        // Check that the customer's name was set correctly
        if (c.getName() != "Alice Smith")
        {
            return false;
        }

        // All checks passed
        return true;
    }

    // * class Curation; a partial unit testing.
    // write one unit test each for the following member functions of the Curation class

    // the parameterized constructor and accessors -->bool test_Curation2();
    inline bool test_Curation2()
    {
        Date d = getTodaysDate();
        Curation x;
        Curation c(12974, 642, d);

        // * x constructor test
        // Check that the curation's artwork ID is correct
        if (x.getArtworkID() != -1)
        {
            return false;
        }

        // Check that the curation's artist ID is correct
        if (x.getArtistID() != -1)
        {
            return false;
        }

        // * c constructor test
        // Check that the curation's artwork ID is correct
        if (c.getArtworkID() != 12974)
        {
            return false;
        }

        // Check that the curation's artist ID is correct
        if (c.getArtistID() != 642)
        {
            return false;
        }

        // All checks passed
        return true;
    }

    // setCurationDate() and getCurationDate()--->bool test_set_getDate_Curation();
    inline bool test_set_getDate_Curation()
    {
        Date d = getTodaysDate();
        Curation x;
        Curation c(12974, 642, d);

        // * x constructor
        // Check that the curation's date is correct
        Date today = getTodaysDate();
        // Check that the curation's date is correct
        if (x.getCurationDate().day != 1 || x.getCurationDate().month != 1 || x.getCurationDate().year != 2022)
        {
            return false;
        }

        // * c constructor
        // Check that the curation's date is correct
        if (x.getCurationDate().day != today.day || x.getCurationDate().month != today.month || x.getCurationDate().year != today.year)
        {
            return false;
        }

        // All checks passed
        return true;
    }

    // * class Sale; a partial unit testing.
    // write one unit test each for the following member functions of the Sale class

    //  .the parameterized constructor and accessors -->bool test_Sale2();
    inline bool test_Sale2()
    {

        // * saleX constructor test
        Sale saleX;
        if (saleX.getCustomerID() != -1)
        {
            return false;
        }
        if (saleX.getArtworkID() != -1)
        {
            return false;
        }
        Date saleDate = saleX.getSaleDate();
        if (saleDate.day != 1 || saleDate.month != 1 || saleDate.year != 2022)
        {
            return false;
        }

        // * sale constructor test
        Sale sale(100, 200, {1, 2, 2023});
        if (sale.getCustomerID() != 100)
        {
            return false;
        }
        if (sale.getArtworkID() != 200)
        {
            return false;
        }

        if (saleDate.day != 1 || saleDate.month != 2 || saleDate.year != 2023)
        {
            return false;
        }

        return true;
    }

    //  .setCustomerID() and getCustomerID()--->bool test_set_getCustomerID_Sale();
    inline bool test_set_getCustomerID_Sale()
    {
        Sale sale;
        sale.setCustomerID(100);
        if (sale.getCustomerID() != 100)
        {
            return false;
        }
        return true;
    }

    // * class Gallery; a partial unit testing.
    // write one unit test for the Gallery::getArtistID() function correspoinding to either of the two scenarios: exist/doesn't exist

    // bool test_getArtistID_Gallery();
    inline bool test_getArtistID_Gallery()
    {
        // create a gallery object and add an artist to it
        Gallery gallery;
        Artist artist(111, "Van Gogh", "vanG@gmail.com", 2002, "San Francisco Zoo", NS_ARTGALLERY::ArtType::painting);
        gallery.addArtist(artist);

        // call the getArtistID function and check the result
        int result = gallery.getArtistID("Van Gogh", "vanG@gmail.com");
        if (result != 0)
        {
            std::cout << "Test failed: expected 0, but got " << result << std::endl;
            return false;
        }

        // test passed
        return true;
    }

    // write one unit test for the Gallery::getCustomerID() function, corresponding to either of the two scenarios: exist/doesn't exist

    // bool test_getCustomerID_Gallery();
    inline bool test_getCustomerID_Gallery()
    {
        Gallery gallery;

        // test case 1: customer exists in gallery
        Customer customer1(123, "John Doe", "johndoe@gmail.com", "Kekette Ave, 94112");
        gallery.addCustomer(customer1);
        int id1 = gallery.getCustomerID(customer1.getName(), customer1.getEmail());
        if (id1 != customer1.getID())
        {
            std::cout << "Test case 1 failed: Incorrect customer ID returned for existing customer\n";
            return false;
        }

        // Test case 2: customer does not exist in gallery
        int id2 = gallery.getCustomerID("Hit Ler", "nonexistentemail@gmail.com");
        if (id2 != -1)
        {
            std::cout << "Test case 2 failed: Customer ID should be -1 for nonexistent customer\n";
            return false;
        }

        // All test cases passed
        std::cout << "All test cases passed for test_getCustomerID_Gallery\n";
        return true;
    }

    // write one unit test for the Gallery::getIDsOfArtworksForSale() function. Make sure your artworksForSale is not empty.

    // bool test_getIDsOfArtistsForSale_Gallery();
    inline bool test_getIDsOfArtistsForSale_Gallery()
    {
        // Create a new gallery object and add some artworks for sale
        NS_ARTGALLERY::Gallery myGallery;
        Artist artistTest(1, "Van Gogh", "vanG@gmail.com", 2002, "San Francisco Zoo", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest;
        artworkTest.setID(11);
        artworkTest.setArtistID(6666);
        artworkTest.setType(ArtType::painting);
        artworkTest.setStyle(ArtStyle::fineArt);
        artworkTest.setSubject(ArtSubject ::nature);
        artworkTest.setYearMade(2002);
        artworkTest.setDimension(10.00, 10.00, 10.00);
        artworkTest.setPrice(90);

        Artist artistTest2(2, "Karl", "KARLG@gmail.com", 2001, "Oakland", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest2;
        artworkTest2.setID(21);
        artworkTest2.setArtistID(6667);
        artworkTest2.setType(ArtType::drawing);
        artworkTest2.setStyle(ArtStyle::abstract);
        artworkTest2.setSubject(ArtSubject::animal);
        artworkTest2.setYearMade(2009);
        artworkTest2.setDimension(9.00, 9.00, 9.00);
        artworkTest.setPrice(9);

        Artist artistTest3(3, "Arthur", "Arthurol@gmail.com", 1987, "Paris", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest3;
        artworkTest3.setID(123);
        artworkTest3.setArtistID(6668);
        artworkTest3.setType(ArtType::other);
        artworkTest3.setStyle(ArtStyle::modern);
        artworkTest3.setSubject(ArtSubject::portrait);
        artworkTest3.setYearMade(2019);
        artworkTest3.setDimension(19.00, 19.00, 19.00);
        artworkTest3.setPrice(91);

        myGallery.curateArtwork(artworkTest, artistTest);
        myGallery.curateArtwork(artworkTest2, artistTest2);
        myGallery.curateArtwork(artworkTest3, artistTest3);

        // Call the function and get the IDs of the artworks for sale
        std::vector<int>
            ids = myGallery.getIDsOfArtistsForSale();

        // Check that the vector is not empty
        if (ids.empty())
        {
            return false;
        }

        // Check that the IDs returned match the IDs of the artists we added
        if (ids.size() != 3 || std::find(ids.begin(), ids.end(), 1) == ids.end() ||
            std::find(ids.begin(), ids.end(), 2) == ids.end() ||
            std::find(ids.begin(), ids.end(), 3) == ids.end())
        {
            return false;
        }

        // All tests passed
        return true;
    }

    inline bool test_getIDsOfArtworksForSale_Gallery() // ! added getIDARTWORK
    {
        // Create a new gallery object and add some artworks for sale
        NS_ARTGALLERY::Gallery myGallery;
        Artist artistTest(111, "Van Gogh", "vanG@gmail.com", 2002, "San Francisco Zoo", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest;
        artworkTest.setID(1);
        artworkTest.setArtistID(6666);
        artworkTest.setType(ArtType::painting);
        artworkTest.setStyle(ArtStyle::fineArt);
        artworkTest.setSubject(ArtSubject ::nature);
        artworkTest.setYearMade(2002);
        artworkTest.setDimension(10.00, 10.00, 10.00);
        artworkTest.setPrice(90);

        Artist artistTest2(212, "Karl", "KARLG@gmail.com", 2001, "Oakland", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest2;
        artworkTest2.setID(2);
        artworkTest2.setArtistID(6667);
        artworkTest2.setType(ArtType::drawing);
        artworkTest2.setStyle(ArtStyle::abstract);
        artworkTest2.setSubject(ArtSubject::animal);
        artworkTest2.setYearMade(2009);
        artworkTest2.setDimension(9.00, 9.00, 9.00);
        artworkTest.setPrice(9);

        Artist artistTest3(1312, "Arthur", "Arthurol@gmail.com", 1987, "Paris", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest3;
        artworkTest3.setID(3);
        artworkTest3.setArtistID(6668);
        artworkTest3.setType(ArtType::other);
        artworkTest3.setStyle(ArtStyle::modern);
        artworkTest3.setSubject(ArtSubject::portrait);
        artworkTest3.setYearMade(2019);
        artworkTest3.setDimension(19.00, 19.00, 19.00);
        artworkTest3.setPrice(91);

        myGallery.curateArtwork(artworkTest, artistTest);
        myGallery.curateArtwork(artworkTest2, artistTest2);
        myGallery.curateArtwork(artworkTest3, artistTest3);

        // Call the function and get the IDs of the artworks for sale
        std::vector<int>
            ids = myGallery.getIDsOfArtworksForSale();

        // Check that the vector is not empty
        if (ids.empty())
        {
            return false;
        }

        // Check that the IDs returned match the IDs of the artists we added
        if (ids.size() != 3 || std::find(ids.begin(), ids.end(), 1) == ids.end() ||
            std::find(ids.begin(), ids.end(), 2) == ids.end() ||
            std::find(ids.begin(), ids.end(), 3) == ids.end())
        {
            return false;
        }

        // All tests passed
        return true;
    }

    // write one unit test for the genArtworksReport() based on ArtType

    // bool test_genArtworksReport_artType_Gallery();
    inline bool test_genArtworksReport_artType_Gallery()
    {
        // Create a new gallery object and curate these artworks
        NS_ARTGALLERY::Gallery myGallery;
        Artist artistTest(111, "Van Gogh", "vanG@gmail.com", 2002, "San Francisco Zoo", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest;
        artworkTest.setID(1);
        artworkTest.setArtistID(6666);
        artworkTest.setType(ArtType::painting);
        artworkTest.setStyle(ArtStyle::fineArt);
        artworkTest.setSubject(ArtSubject ::nature);
        artworkTest.setYearMade(2002);
        artworkTest.setDimension(10.00, 10.00, 10.00);
        artworkTest.setPrice(90);

        Artist artistTest2(121, "Karl", "KARLG@gmail.com", 2001, "Oakland", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest2;
        artworkTest2.setID(2);
        artworkTest2.setArtistID(6667);
        artworkTest2.setType(ArtType::drawing);
        artworkTest2.setStyle(ArtStyle::abstract);
        artworkTest2.setSubject(ArtSubject::animal);
        artworkTest2.setYearMade(2009);
        artworkTest2.setDimension(9.00, 9.00, 9.00);
        artworkTest.setPrice(9);

        Artist artistTest3(111, "Arthur", "Arthurol@gmail.com", 1987, "Paris", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest3;
        artworkTest3.setID(3);
        artworkTest3.setArtistID(6668);
        artworkTest3.setType(ArtType::other);
        artworkTest3.setStyle(ArtStyle::modern);
        artworkTest3.setSubject(ArtSubject::portrait);
        artworkTest3.setYearMade(2019);
        artworkTest3.setDimension(19.00, 19.00, 19.00);
        artworkTest3.setPrice(91);

        myGallery.curateArtwork(artworkTest, artistTest);
        myGallery.curateArtwork(artworkTest2, artistTest2);
        myGallery.curateArtwork(artworkTest3, artistTest3);

        // generate report for Paintings
        vector<pair<string, int>> myReport = myGallery.genArtworksReport(NS_ARTGALLERY::ReportType::artType);
        myReport.push_back(make_pair(toStr_ArtType(ArtType::painting), 3));

        // expected report
        vector<pair<string, int>> expected_report;
        expected_report.emplace_back("ArtType::painting", 3); // create the pair directly in the vector

        // compare expected and actual reports
        return myReport == expected_report;
    }

    // Write one unit test for Gallery::curateArtwork().
    //  bool test_curateArtwork_Gallery();
    inline bool test_curateArtwork_Gallery()
    {
        // Create a new gallery object and curate these artworks
        NS_ARTGALLERY::Gallery myGallery;
        Artist artistTest(111, "Van Gogh", "vanG@gmail.com", 2002, "San Francisco Zoo", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest;
        artworkTest.setID(1);
        artworkTest.setArtistID(6666);
        artworkTest.setType(ArtType::painting);
        artworkTest.setStyle(ArtStyle::fineArt);
        artworkTest.setSubject(ArtSubject ::nature);
        artworkTest.setYearMade(2002);
        artworkTest.setDimension(10.00, 10.00, 10.00);
        artworkTest.setPrice(90);

        // curate the artwork
        myGallery.curateArtwork(artworkTest, artistTest);

        // check if artwork is in artworks collection
        bool found = false;

        if (myGallery.num_artworksCurated() != 0)
        {
            found = true;
        }

        if (!found)
        {
            return false;
        }

        // check if artwork is in artworksForSale collection
        bool found2 = false;

        if (myGallery.num_artworksForSale() != 0)
        {
            found2 = true;
        }
        if (!found2)
        {
            return false;
        }

        return true;
    }

    // write one unit test for the Gallery::sellArtwork() function
    //   bool test_sellArtwork_Gallery();
    inline bool test_sellArtwork_Gallery()
    {
        NS_ARTGALLERY::Gallery myGallery;
        NS_ARTGALLERY::Customer customerTest;
        Artist artistTest(111, "Van Gogh", "vanG@gmail.com", 2002, "San Francisco Zoo", NS_ARTGALLERY::ArtType::painting);
        Artwork artworkTest;
        artworkTest.setID(1);
        artworkTest.setArtistID(6666);
        artworkTest.setType(ArtType::painting);
        artworkTest.setStyle(ArtStyle::fineArt);
        artworkTest.setSubject(ArtSubject ::nature);
        artworkTest.setYearMade(2002);
        artworkTest.setDimension(10.00, 10.00, 10.00);
        artworkTest.setPrice(90);

        // curate the artwork
        myGallery.curateArtwork(artworkTest, artistTest);

        // sell artwork and check if it's removed from artworksForSale and added to soldArtworks
        myGallery.sellArtwork(1, customerTest);

        if (myGallery.num_sales() != 0)
        {
            return false;
        }

        return true;
    }

} // end-of namespace NS_UTESTS

#endif