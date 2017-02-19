#ifndef SamiStoreBundlesApi_H_
#define SamiStoreBundlesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiBundleItem.h"
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreBundlesApi {
public:
  SamiStoreBundlesApi();
  virtual ~SamiStoreBundlesApi();

  SamiBundleItem* 
  createBundleItemWithCompletion(Boolean* cascade, SamiBundleItem* bundleItem, void (* handler)(SamiBundleItem*, SamiError*));
  SamiItemTemplateResource* 
  createBundleTemplateWithCompletion(SamiItemTemplateResource* bundleTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteBundleItemWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteBundleTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiBundleItem* 
  getBundleItemWithCompletion(Integer* _id, void (* handler)(SamiBundleItem*, SamiError*));
  SamiItemTemplateResource* 
  getBundleTemplateWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getBundleTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  SamiBundleItem* 
  updateBundleItemWithCompletion(Integer* _id, Boolean* cascade, SamiBundleItem* bundleItem, void (* handler)(SamiBundleItem*, SamiError*));
  SamiItemTemplateResource* 
  updateBundleTemplateWithCompletion(String* _id, SamiItemTemplateResource* bundleTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreBundlesApi_H_ */
