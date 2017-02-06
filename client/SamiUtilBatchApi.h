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
  sendBatchWithCompletion(SamiBatch* batch, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilBatchApi_H_ */
