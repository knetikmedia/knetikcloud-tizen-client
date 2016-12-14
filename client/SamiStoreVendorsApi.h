#ifndef SamiStoreVendorsApi_H_
#define SamiStoreVendorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPage«VendorResource».h"
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
  SamiPage«VendorResource»* 
  getVendorsUsingGETWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«VendorResource»*, SamiError*));
  void 
  updateVendorUsingPUTWithCompletion(Integer* _id, SamiVendorResource* vendor, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreVendorsApi_H_ */
