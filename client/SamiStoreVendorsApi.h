#ifndef SamiStoreVendorsApi_H_
#define SamiStoreVendorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiPageResource«VendorResource».h"
#include "SamiResult.h"
#include "SamiVendorResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreVendorsApi {
public:
  SamiStoreVendorsApi();
  virtual ~SamiStoreVendorsApi();

  SamiVendorResource* 
  createVendorWithCompletion(SamiVendorResource* vendor, void (* handler)(SamiVendorResource*, SamiError*));
  SamiItemTemplateResource* 
  createVendorTemplateWithCompletion(SamiItemTemplateResource* vendorTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteVendorWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteVendorTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiVendorResource* 
  getVendorWithCompletion(Integer* _id, void (* handler)(SamiVendorResource*, SamiError*));
  SamiItemTemplateResource* 
  getVendorTemplateWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getVendorTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  SamiPageResource«VendorResource»* 
  getVendorsWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«VendorResource»*, SamiError*));
  SamiVendorResource* 
  updateVendorWithCompletion(Integer* _id, SamiVendorResource* vendor, void (* handler)(SamiVendorResource*, SamiError*));
  SamiItemTemplateResource* 
  updateVendorTemplateWithCompletion(String* _id, SamiItemTemplateResource* vendorTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreVendorsApi_H_ */
