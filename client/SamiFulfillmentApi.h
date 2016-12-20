#ifndef SamiFulfillmentApi_H_
#define SamiFulfillmentApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiFulfillmentType.h"
#include "SamiPageResource«FulfillmentType».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiFulfillmentApi {
public:
  SamiFulfillmentApi();
  virtual ~SamiFulfillmentApi();

  SamiFulfillmentType* 
  createFulfillmentTypeUsingPOSTWithCompletion(SamiFulfillmentType* type, void (* handler)(SamiFulfillmentType*, SamiError*));
  void 
  deleteFulfillmentTypeUsingDELETEWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiFulfillmentType* 
  getFulfillmentTypeUsingGETWithCompletion(Integer* _id, void (* handler)(SamiFulfillmentType*, SamiError*));
  SamiPageResource«FulfillmentType»* 
  getFulfillmentsUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«FulfillmentType»*, SamiError*));
  void 
  updateFulfillmentTypeUsingPUTWithCompletion(Integer* _id, SamiFulfillmentType* fulfillmentType, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiFulfillmentApi_H_ */
