#ifndef _StoreCouponsManager_H_
#define _StoreCouponsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CouponItem.h"
#include "ItemTemplateResource.h"
#include "PageResource«ItemTemplateResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup StoreCoupons StoreCoupons
 * \ingroup Operations
 *  @{
 */
class StoreCouponsManager {
public:
	StoreCouponsManager();
	virtual ~StoreCouponsManager();

/*! \brief Create a coupon item. *Synchronous*
 *
 * SKUs have to be unique in the entire store.
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param couponItem The coupon item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCouponItemSync(char * accessToken,
	bool cascade, CouponItem couponItem, 
	void(* handler)(CouponItem, Error, void* )
	, void* userData);

/*! \brief Create a coupon item. *Asynchronous*
 *
 * SKUs have to be unique in the entire store.
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param couponItem The coupon item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCouponItemAsync(char * accessToken,
	bool cascade, CouponItem couponItem, 
	void(* handler)(CouponItem, Error, void* )
	, void* userData);


/*! \brief Create a coupon template. *Synchronous*
 *
 * Coupon Templates define a type of coupon and the properties they have.
 * \param couponTemplateResource The new coupon template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCouponTemplateSync(char * accessToken,
	ItemTemplateResource couponTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a coupon template. *Asynchronous*
 *
 * Coupon Templates define a type of coupon and the properties they have.
 * \param couponTemplateResource The new coupon template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createCouponTemplateAsync(char * accessToken,
	ItemTemplateResource couponTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a coupon item. *Synchronous*
 *
 * 
 * \param id The id of the coupon *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCouponItemSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a coupon item. *Asynchronous*
 *
 * 
 * \param id The id of the coupon *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCouponItemAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a coupon template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCouponTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a coupon template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCouponTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single coupon item. *Synchronous*
 *
 * 
 * \param id The id of the coupon *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCouponItemSync(char * accessToken,
	int id, 
	void(* handler)(CouponItem, Error, void* )
	, void* userData);

/*! \brief Get a single coupon item. *Asynchronous*
 *
 * 
 * \param id The id of the coupon *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCouponItemAsync(char * accessToken,
	int id, 
	void(* handler)(CouponItem, Error, void* )
	, void* userData);


/*! \brief Get a single coupon template. *Synchronous*
 *
 * Coupon Templates define a type of coupon and the properties they have.
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCouponTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single coupon template. *Asynchronous*
 *
 * Coupon Templates define a type of coupon and the properties they have.
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCouponTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search coupon templates. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCouponTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search coupon templates. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCouponTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ItemTemplateResource», Error, void* )
	, void* userData);


/*! \brief Update a coupon item. *Synchronous*
 *
 * 
 * \param id The id of the coupon *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param couponItem The coupon item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCouponItemSync(char * accessToken,
	int id, bool cascade, CouponItem couponItem, 
	void(* handler)(CouponItem, Error, void* )
	, void* userData);

/*! \brief Update a coupon item. *Asynchronous*
 *
 * 
 * \param id The id of the coupon *Required*
 * \param cascade Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values.
 * \param couponItem The coupon item object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCouponItemAsync(char * accessToken,
	int id, bool cascade, CouponItem couponItem, 
	void(* handler)(CouponItem, Error, void* )
	, void* userData);


/*! \brief Update a coupon template. *Synchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param couponTemplateResource The coupon template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCouponTemplateSync(char * accessToken,
	std::string id, ItemTemplateResource couponTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a coupon template. *Asynchronous*
 *
 * 
 * \param id The id of the template *Required*
 * \param couponTemplateResource The coupon template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCouponTemplateAsync(char * accessToken,
	std::string id, ItemTemplateResource couponTemplateResource, 
	void(* handler)(ItemTemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* StoreCouponsManager_H_ */
