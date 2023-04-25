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

    // class Artwork; a partial unit testing.
    // write one unit test each for the following member functions of the Artwork class
    //   . default constructor and accessors --->bool test_Artwork();
    //   . setStyle() and getStyle()    --->bool test_set_getStyle_Artwork();
    //   . setDimension(), getWidth(), getHeight() and getDepth() --->bool test_setDimension_Artwork();

    // default constructor and accessors --->bool test_Artwork();
    bool test_Artwork()
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
    // setStyle() and getStyle()    --->bool test_set_getStyle_Artwork();
    bool test_set_getStyle_Artwork()
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

    // setDimension(), getWidth(), getHeight() and getDepth() --->bool test_setDimension_Artwork();
    bool test_setDimension_Artwork()
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

    //  class Artist; a partial unit testing.
    //  write one unit test each for the following member functions of the Artist class
    //   .default constructor and accessors -->bool test_Artist();
    //   .setID() and getID()--->bool test_set_getID_Artist();

    // class Customer; a partial unit testing.
    // write one unit test each for the following member functions of the Customer class
    //  .the parameterized constructor and accessors -->bool test_Customer2();
    //  .setName() and getName()--->bool test_set_getName_Customer();

    // class Curation; a partial unit testing.
    // write one unit test each for the following member functions of the Curation class
    //  .the parameterized constructor and accessors -->bool test_Curation2();
    //  .setCurationDate() and getCurationDate()--->bool test_set_getDate_Curation();

    // class Sale; a partial unit testing.
    // write one unit test each for the following member functions of the Sale class
    //  .the parameterized constructor and accessors -->bool test_Sale2();
    //  .setCustomerID() and getCustomerID()--->bool test_set_getCustomerID_Sale();

    // class Gallery; a partial unit testing.
    // write one unit test for the Gallery::getArtistID() function correspoinding to either of the two scenarios: exist/doesn't exist
    //   bool test_getArtistID_Gallery();

    // write one unit test for the Gallery::getCustomerID() function, correspoinding to either of the two scenarios: exist/doesn't exist
    //   bool test_getCustomerID_Gallery();

    // write one unit test for the Gallery::getIDsOfArtworksForSale() function. Make sure your artworksForSale is not empty.
    //  bool test_getIDsOfArtistsForSale_Gallery();

    // write one unit test for the Gallery::getIDsOfArtworksForSale() function. Make sure your artworksForSale is not empty. This test will call the curateArtwork() function.
    //  bool test_getIDsOfArtworksForSale_Gallery();

    // write one unit test for the genArtworksReport() based on ArtType
    //    bool test_genArtworksReport_artType_Gallery();

    // Write one unit test for Gallery::curateArtwork().
    //  bool test_curateArtwork_Gallery();

    // write one unit test for the Gallery::sellArtwork() function
    //   bool test_sellArtwork_Gallery();

} // end-of namespace NS_UTESTS

#endif