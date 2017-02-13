#ifndef SamiStoreSalesApi_H_
#define SamiStoreSalesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCatalogSale.h"
#include "SamiPageResource«CatalogSale».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreSalesApi {
public:
  SamiStoreSalesApi();
  virtual ~SamiStoreSalesApi();

  SamiCatalogSale* 
  createCatalogSaleWithCompletion(SamiCatalogSale* catalogSale, void (* handler)(SamiCatalogSale*, SamiError*));
  void 
  deleteCatalogSaleWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiCatalogSale* 
  getCatalogSaleWithCompletion(Integer* _id, void (* handler)(SamiCatalogSale*, SamiError*));
  SamiPageResource«CatalogSale»* 
  getCatalogSalesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CatalogSale»*, SamiError*));
  void 
  updateCatalogSaleWithCompletion(Integer* _id, SamiCatalogSale* catalogSale, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreSalesApi_H_ */
