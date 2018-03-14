#ifndef _Store_Shopping_CartsManager_H_
#define _Store_Shopping_CartsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Cart.h"
#include "CartItemRequest.h"
#include "CartShippableResponse.h"
#include "CartShippingAddressRequest.h"
#include "CouponDefinition.h"
#include "IntWrapper.h"
#include "PageResource«CartSummary».h"
#include "Result.h"
#include "SampleCountriesResponse.h"
#include "SkuRequest.h"
#include "StringWrapper.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Store_Shopping_Carts Store_Shopping_Carts
 * \ingroup Operations
 *  @{
 */
class Store_Shopping_CartsManager {
public:
	Store_Shopping_CartsManager();
	virtual ~Store_Shopping_CartsManager();

/*! \brief Adds a custom discount to the cart. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN
 * \param id The id of the cart *Required*
 * \param customDiscount The details of the discount to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addCustomDiscountSync(char * accessToken,
	std::string id, CouponDefinition customDiscount, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Adds a custom discount to the cart. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN
 * \param id The id of the cart *Required*
 * \param customDiscount The details of the discount to add
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addCustomDiscountAsync(char * accessToken,
	std::string id, CouponDefinition customDiscount, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Adds a discount coupon to the cart. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param skuRequest The request of the sku
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDiscountToCartSync(char * accessToken,
	std::string id, SkuRequest skuRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Adds a discount coupon to the cart. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param skuRequest The request of the sku
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDiscountToCartAsync(char * accessToken,
	std::string id, SkuRequest skuRequest, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add an item to the cart. *Synchronous*
 *
 * Currently, carts cannot contain virtual and real currency items at the same time. Furthermore, the API only support a single virtual item at the moment. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param cartItemRequest The cart item request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addItemToCartSync(char * accessToken,
	std::string id, CartItemRequest cartItemRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add an item to the cart. *Asynchronous*
 *
 * Currently, carts cannot contain virtual and real currency items at the same time. Furthermore, the API only support a single virtual item at the moment. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param cartItemRequest The cart item request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addItemToCartAsync(char * accessToken,
	std::string id, CartItemRequest cartItemRequest, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Create a cart. *Synchronous*
 *
 * You don't have to have a user to create a cart but the API requires authentication to checkout. <br><br><b>Permissions Needed:</b> ANY
 * \param owner Set the owner of a cart. If not specified, defaults to the calling user's id. If specified and is not the calling user's id, SHOPPING_CARTS_ADMIN permission is required
 * \param currencyCode Set the currency for the cart, by currency code. May be disallowed by site settings.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCartSync(char * accessToken,
	int owner, std::string currencyCode, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Create a cart. *Asynchronous*
 *
 * You don't have to have a user to create a cart but the API requires authentication to checkout. <br><br><b>Permissions Needed:</b> ANY
 * \param owner Set the owner of a cart. If not specified, defaults to the calling user's id. If specified and is not the calling user's id, SHOPPING_CARTS_ADMIN permission is required
 * \param currencyCode Set the currency for the cart, by currency code. May be disallowed by site settings.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCartAsync(char * accessToken,
	int owner, std::string currencyCode, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Returns the cart with the given GUID. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCartSync(char * accessToken,
	std::string id, 
	void(* handler)(Cart, Error, void* )
	, void* userData);

/*! \brief Returns the cart with the given GUID. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCartAsync(char * accessToken,
	std::string id, 
	void(* handler)(Cart, Error, void* )
	, void* userData);


/*! \brief Get a list of carts. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param filterOwnerId Filter by the id of the owner
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCartsSync(char * accessToken,
	int filterOwnerId, int size, int page, std::string order, 
	void(* handler)(PageResource«CartSummary», Error, void* )
	, void* userData);

/*! \brief Get a list of carts. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param filterOwnerId Filter by the id of the owner
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCartsAsync(char * accessToken,
	int filterOwnerId, int size, int page, std::string order, 
	void(* handler)(PageResource«CartSummary», Error, void* )
	, void* userData);


/*! \brief Returns whether a cart requires shipping. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippableSync(char * accessToken,
	std::string id, 
	void(* handler)(CartShippableResponse, Error, void* )
	, void* userData);

/*! \brief Returns whether a cart requires shipping. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippableAsync(char * accessToken,
	std::string id, 
	void(* handler)(CartShippableResponse, Error, void* )
	, void* userData);


/*! \brief Get the list of available shipping countries per vendor. *Synchronous*
 *
 * Since a cart can have multiple vendors with different shipping options, the countries are broken down by vendors. Please see notes about the response object as the fields are variable. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingCountriesSync(char * accessToken,
	std::string id, 
	void(* handler)(SampleCountriesResponse, Error, void* )
	, void* userData);

/*! \brief Get the list of available shipping countries per vendor. *Asynchronous*
 *
 * Since a cart can have multiple vendors with different shipping options, the countries are broken down by vendors. Please see notes about the response object as the fields are variable. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getShippingCountriesAsync(char * accessToken,
	std::string id, 
	void(* handler)(SampleCountriesResponse, Error, void* )
	, void* userData);


/*! \brief Removes a discount coupon from the cart. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param code The SKU code of the coupon to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeDiscountFromCartSync(char * accessToken,
	std::string id, std::string code, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes a discount coupon from the cart. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param code The SKU code of the coupon to remove *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeDiscountFromCartAsync(char * accessToken,
	std::string id, std::string code, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Sets the currency to use for the cart. *Synchronous*
 *
 * May be disallowed by site settings. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param currencyCode The code of the currency
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setCartCurrencySync(char * accessToken,
	std::string id, StringWrapper currencyCode, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Sets the currency to use for the cart. *Asynchronous*
 *
 * May be disallowed by site settings. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param currencyCode The code of the currency
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setCartCurrencyAsync(char * accessToken,
	std::string id, StringWrapper currencyCode, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Sets the owner of a cart if none is set already. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param userId The id of the user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setCartOwnerSync(char * accessToken,
	std::string id, IntWrapper userId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Sets the owner of a cart if none is set already. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param userId The id of the user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setCartOwnerAsync(char * accessToken,
	std::string id, IntWrapper userId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Changes the quantity of an item already in the cart. *Synchronous*
 *
 * A quantity of zero will remove the item from the cart altogether. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param cartItemRequest The cart item request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateItemInCartSync(char * accessToken,
	std::string id, CartItemRequest cartItemRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Changes the quantity of an item already in the cart. *Asynchronous*
 *
 * A quantity of zero will remove the item from the cart altogether. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param cartItemRequest The cart item request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateItemInCartAsync(char * accessToken,
	std::string id, CartItemRequest cartItemRequest, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Modifies or sets the order shipping address. *Synchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param cartShippingAddressRequest The cart shipping address request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateShippingAddressSync(char * accessToken,
	std::string id, CartShippingAddressRequest cartShippingAddressRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Modifies or sets the order shipping address. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner
 * \param id The id of the cart *Required*
 * \param cartShippingAddressRequest The cart shipping address request object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateShippingAddressAsync(char * accessToken,
	std::string id, CartShippingAddressRequest cartShippingAddressRequest, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Store_Shopping_CartsManager_H_ */
