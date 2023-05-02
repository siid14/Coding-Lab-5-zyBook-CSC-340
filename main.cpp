//
//  main.cpp
//  ArtGallerySimplified
//
// created by [Sidney Thomas]
// date: 04/23/2023

#include <iostream>
#include "util_date_uniqueIDs.h"
#include "unitTests.h"

int main()
{
    using namespace NS_ARTGALLERY;
    using namespace NS_UTESTS;

    // * UNIT TEST - Artwork
    if (test_Artwork() == true)
    {
        cout << "test_Artwork is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_Artwork is false (FAILED)\n";
    }

    if (test_set_getStyle_Artwork() == true)
    {
        cout << "test_set_getStyle_Artwork is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_set_getStyle_Artwork is false (FAILED)\n";
    }

    if (test_setDimension_Artwork() == true)
    {
        cout << "test_setDimension_Artwork is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_setDimension_Artwork is false (FAILED)\n";
    }

    // * UNIT TEST - Artist
    if (test_Artist() == true)
    {
        cout << "test_Artist is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_Artist is false (FAILED)\n";
    }

    if (test_set_getID_Artist() == true)
    {
        cout << "test_set_getID_Artist is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_set_getID_Artist is false (FAILED)\n";
    }

    // * UNIT TEST - Customer
    if (test_Customer2() == true)
    {
        cout << "test_Customer2 is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_Customer2 is false (FAILED)\n";
    }

    if (test_set_getName_Customer() == true)
    {
        cout << "test_set_getName_Customer is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_set_getName_Customer is false (FAILED)\n";
    }

    // * UNIT TEST - Curation

    if (test_Curation2() == true)
    {
        cout << "test_Curation2 is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_Curation2 is false (FAILED)\n";
    }

    if (test_set_getDate_Curation() == true)
    {
        cout << "test_set_getDate_Curation is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_set_getDate_Curation is false (FAILED)\n";
    }

    // * UNIT TEST - Sale
    // test_Sale2();
    if (test_Sale2() == true)
    {
        cout << "test_Sale2 is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_Sale2 is false (FAILED)\n";
    }
    // test_set_getCustomerID_Sale();
    if (test_set_getCustomerID_Sale() == true)
    {
        cout << "test_set_getCustomerID_Sale is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_set_getCustomerID_Sale is false (FAILED)\n";
    }

    // * UNIT TEST - Gallery
    if (test_getArtistID_Gallery() == true)
    {
        cout << "test_getArtistID_Gallery_Exists is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_getArtistID_Gallery_Exists is false (FAILED)\n";
    }

    if (test_getCustomerID_Gallery() == true)
    {
        cout << "test_getCustomerID_Gallery is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_getCustomerID_Gallery is false (FAILED)\n";
    }

    if (test_getIDsOfArtistsForSale_Gallery() == true)
    {
        cout << "test_getIDsOfArtistsForSale_Gallery is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_getIDsOfArtistsForSale_Gallery is false (FAILED)\n";
    }

    if (test_genArtworksReport_artType_Gallery() == true)
    {
        cout << "test_genArtworksReport_artType_Gallery is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_genArtworksReport_artType_Gallery is false (FAILED)\n";
    }

    if (test_set_getCustomerID_Sale() == true)
    {
        cout << "test_curateArtwork_Gallery() is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_curateArtwork_Gallery() is false (FAILED)\n";
    }

    if (test_sellArtwork_Gallery() == true)
    {
        cout << "test_sellArtwork_Gallery is true (SUCCESS)\n";
    }
    else
    {
        cout << "test_sellArtwork_Gallery is false (FAILED)\n";
    }

    return 0;
}
