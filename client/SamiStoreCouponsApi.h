#ifndef SamiStoreCouponsApi_H_
#define SamiStoreCouponsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCouponItem.h"
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«ItemTemplateResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreCouponsApi {
public:
  SamiStoreCouponsApi();
  virtual ~SamiStoreCouponsApi();

  SamiCouponItem* 
  createCouponItemUsingPOSTWithCompletion(SamiCouponItem* couponItem, void (* handler)(SamiCouponItem*, SamiError*));
  SamiItemTemplateResource* 
  createCouponTemplateUsingPOSTWithCompletion(SamiItemTemplateResource* couponTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteCouponItemUsingDELETEWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteCouponTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiCouponItem* 
  getCouponItemUsingGETWithCompletion(Integer* _id, void (* handler)(SamiCouponItem*, SamiError*));
  SamiItemTemplateResource* 
  getCouponTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getCouponTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  void 
  updateCouponItemUsingPUTWithCompletion(Integer* _id, SamiCouponItem* couponItem, void(* handler)(SamiError*));
  void 
  updateCouponTemplateUsingPUTWithCompletion(String* _id, SamiItemTemplateResource* couponTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreCouponsApi_H_ */
