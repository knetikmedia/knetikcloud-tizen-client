#ifndef SamiStoreShoppingCartsApi_H_
#define SamiStoreShoppingCartsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCart.h"
#include "SamiCartItemRequest.h"
#include "SamiCartShippableResponse.h"
#include "SamiCartShippingAddressRequest.h"
#include "SamiCouponDefinition.h"
#include "SamiPageResource«CartSummary».h"
#include "SamiResult.h"
#include "SamiSampleCountriesResponse.h"
#include "SamiSkuRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreShoppingCartsApi {
public:
  SamiStoreShoppingCartsApi();
  virtual ~SamiStoreShoppingCartsApi();

  void 
  addCustomDiscountWithCompletion(String* _id, SamiCouponDefinition* customDiscount, void(* handler)(SamiError*));
  void 
  addDiscountToCartWithCompletion(String* _id, SamiSkuRequest* skuRequest, void(* handler)(SamiError*));
  void 
  addItemToCartWithCompletion(String* _id, SamiCartItemRequest* cartItemRequest, void(* handler)(SamiError*));
  String* 
  createCartWithCompletion(Integer* owner, String* currencyCode, void (* handler)(String*, SamiError*));
  SamiCart* 
  getCartWithCompletion(String* _id, void (* handler)(SamiCart*, SamiError*));
  SamiPageResource«CartSummary»* 
  getCartsWithCompletion(Integer* filterOwnerId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CartSummary»*, SamiError*));
  SamiCartShippableResponse* 
  getShippableWithCompletion(String* _id, void (* handler)(SamiCartShippableResponse*, SamiError*));
  SamiSampleCountriesResponse* 
  getShippingCountriesWithCompletion(String* _id, void (* handler)(SamiSampleCountriesResponse*, SamiError*));
  void 
  removeDiscountFromCartWithCompletion(String* _id, String* code, void(* handler)(SamiError*));
  void 
  setCartCurrencyWithCompletion(String* _id, String* currencyCode, void(* handler)(SamiError*));
  void 
  setCartOwnerWithCompletion(String* _id, Integer* userId, void(* handler)(SamiError*));
  void 
  updateItemInCartWithCompletion(String* _id, SamiCartItemRequest* cartItemRequest, void(* handler)(SamiError*));
  void 
  updateShippingAddressWithCompletion(String* _id, SamiCartShippingAddressRequest* cartShippingAddressRequest, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreShoppingCartsApi_H_ */
