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
#include "SamiPage«CartSummary».h"
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
  addDiscountUsingPOSTWithCompletion(String* _id, SamiSkuRequest* skuRequest, void(* handler)(SamiError*));
  void 
  addItemUsingPOSTWithCompletion(String* _id, SamiCartItemRequest* cartItemRequest, void(* handler)(SamiError*));
  void 
  assignCartUsingPUTWithCompletion(String* _id, Integer* userId, void(* handler)(SamiError*));
  SamiCartShippableResponse* 
  checkShippableUsingGETWithCompletion(String* _id, void (* handler)(SamiCartShippableResponse*, SamiError*));
  String* 
  createCartUsingPOSTWithCompletion(Integer* owner, String* currencyCode, void (* handler)(String*, SamiError*));
  SamiCart* 
  getCartUsingGETWithCompletion(String* _id, void (* handler)(SamiCart*, SamiError*));
  SamiSampleCountriesResponse* 
  getCountriesUsingGETWithCompletion(String* _id, void (* handler)(SamiSampleCountriesResponse*, SamiError*));
  void 
  modifyShippingAddressUsingPUTWithCompletion(String* _id, SamiCartShippingAddressRequest* cartShippingAddressRequest, void(* handler)(SamiError*));
  void 
  removeDiscountUsingDELETEWithCompletion(String* _id, String* code, void(* handler)(SamiError*));
  SamiPage«CartSummary»* 
  searchCartsUsingGETWithCompletion(Integer* filterOwnerId, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«CartSummary»*, SamiError*));
  void 
  setCartCurrencyUsingPUTWithCompletion(String* _id, String* currencyCode, void(* handler)(SamiError*));
  void 
  updateItemUsingPUTWithCompletion(String* _id, SamiCartItemRequest* cartItemRequest, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreShoppingCartsApi_H_ */
