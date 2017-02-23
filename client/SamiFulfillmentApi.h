#ifndef SamiFulfillmentApi_H_
#define SamiFulfillmentApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiFulfillmentType.h"
#include "SamiPageResource«FulfillmentType».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiFulfillmentApi {
public:
  SamiFulfillmentApi();
  virtual ~SamiFulfillmentApi();

  SamiFulfillmentType* 
  createFulfillmentTypeWithCompletion(SamiFulfillmentType* type, void (* handler)(SamiFulfillmentType*, SamiError*));
  void 
  deleteFulfillmentTypeWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiFulfillmentType* 
  getFulfillmentTypeWithCompletion(Integer* _id, void (* handler)(SamiFulfillmentType*, SamiError*));
  SamiPageResource«FulfillmentType»* 
  getFulfillmentTypesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«FulfillmentType»*, SamiError*));
  void 
  updateFulfillmentTypeWithCompletion(Integer* _id, SamiFulfillmentType* fulfillmentType, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiFulfillmentApi_H_ */
