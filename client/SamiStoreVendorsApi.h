#ifndef SamiStoreVendorsApi_H_
#define SamiStoreVendorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«VendorResource».h"
#include "SamiVendorResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreVendorsApi {
public:
  SamiStoreVendorsApi();
  virtual ~SamiStoreVendorsApi();

  SamiVendorResource* 
  createVendorUsingPOSTWithCompletion(SamiVendorResource* vendor, void (* handler)(SamiVendorResource*, SamiError*));
  void 
  deleteVendorUsingDELETEWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiVendorResource* 
  getVendorUsingGETWithCompletion(Integer* _id, void (* handler)(SamiVendorResource*, SamiError*));
  SamiPageResource«VendorResource»* 
  getVendorsUsingGETWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«VendorResource»*, SamiError*));
  void 
  updateVendorUsingPUTWithCompletion(Integer* _id, SamiVendorResource* vendor, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreVendorsApi_H_ */
