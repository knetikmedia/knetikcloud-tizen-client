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
  createVendorWithCompletion(SamiVendorResource* vendor, void (* handler)(SamiVendorResource*, SamiError*));
  void 
  deleteVendorWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiVendorResource* 
  getVendorWithCompletion(Integer* _id, void (* handler)(SamiVendorResource*, SamiError*));
  SamiPageResource«VendorResource»* 
  getVendorsWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«VendorResource»*, SamiError*));
  void 
  updateVendorWithCompletion(Integer* _id, SamiVendorResource* vendor, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreVendorsApi_H_ */
