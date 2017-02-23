#ifndef SamiStoreCouponsApi_H_
#define SamiStoreCouponsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiCouponItem.h"
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreCouponsApi {
public:
  SamiStoreCouponsApi();
  virtual ~SamiStoreCouponsApi();

  SamiCouponItem* 
  createCouponItemWithCompletion(Boolean* cascade, SamiCouponItem* couponItem, void (* handler)(SamiCouponItem*, SamiError*));
  SamiItemTemplateResource* 
  createCouponTemplateWithCompletion(SamiItemTemplateResource* couponTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteCouponItemWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteCouponTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiCouponItem* 
  getCouponItemWithCompletion(Integer* _id, void (* handler)(SamiCouponItem*, SamiError*));
  SamiItemTemplateResource* 
  getCouponTemplateWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getCouponTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  SamiCouponItem* 
  updateCouponItemWithCompletion(Integer* _id, Boolean* cascade, SamiCouponItem* couponItem, void (* handler)(SamiCouponItem*, SamiError*));
  SamiItemTemplateResource* 
  updateCouponTemplateWithCompletion(String* _id, SamiItemTemplateResource* couponTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreCouponsApi_H_ */
