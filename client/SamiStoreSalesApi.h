#ifndef SamiStoreSalesApi_H_
#define SamiStoreSalesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCatalogSale.h"
#include "SamiPage«CatalogSale».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreSalesApi {
public:
  SamiStoreSalesApi();
  virtual ~SamiStoreSalesApi();

  SamiCatalogSale* 
  createCatalogSaleUsingPOSTWithCompletion(SamiCatalogSale* catalogSale, void (* handler)(SamiCatalogSale*, SamiError*));
  void 
  deleteCatalogSaleUsingDELETEWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiCatalogSale* 
  getCatalogSaleUsingGETWithCompletion(Integer* _id, void (* handler)(SamiCatalogSale*, SamiError*));
  SamiPage«CatalogSale»* 
  getCatalogSalesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«CatalogSale»*, SamiError*));
  void 
  updateCatalogSaleUsingPUTWithCompletion(Integer* _id, SamiCatalogSale* catalogSale, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreSalesApi_H_ */
