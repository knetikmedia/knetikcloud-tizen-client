#ifndef SamiUtilBatchApi_H_
#define SamiUtilBatchApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiBatch.h"
#include "SamiBatchReturn.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilBatchApi {
public:
  SamiUtilBatchApi();
  virtual ~SamiUtilBatchApi();

  void 
  getBatchPOSTUsingPOSTWithCompletion(SamiBatch* batch, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilBatchApi_H_ */
