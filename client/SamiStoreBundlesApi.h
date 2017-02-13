#ifndef SamiStoreBundlesApi_H_
#define SamiStoreBundlesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiBundleItem.h"
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«ItemTemplateResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreBundlesApi {
public:
  SamiStoreBundlesApi();
  virtual ~SamiStoreBundlesApi();

  SamiBundleItem* 
  createBundleItemWithCompletion(SamiBundleItem* bundleItem, void (* handler)(SamiBundleItem*, SamiError*));
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
  void 
  updateBundleItemWithCompletion(Integer* _id, SamiBundleItem* bundleItem, void(* handler)(SamiError*));
  void 
  updateBundleTemplateWithCompletion(String* _id, SamiItemTemplateResource* bundleTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreBundlesApi_H_ */
