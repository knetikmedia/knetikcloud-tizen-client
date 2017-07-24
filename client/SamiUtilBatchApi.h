#ifndef SamiUtilBatchApi_H_
#define SamiUtilBatchApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiBatch.h"
#include "SamiBatchResult.h"
#include "SamiBatchReturn.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilBatchApi {
public:
  SamiUtilBatchApi();
  virtual ~SamiUtilBatchApi();

  IList* 
  getBatchWithCompletion(String* token, void (* handler)(IList*, SamiError*));
  IList* 
  sendBatchWithCompletion(SamiBatch* batch, void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilBatchApi_H_ */
