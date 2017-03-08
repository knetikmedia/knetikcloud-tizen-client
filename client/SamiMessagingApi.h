#ifndef SamiMessagingApi_H_
#define SamiMessagingApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiRawEmailResource.h"
#include "SamiRawSMSResource.h"
#include "SamiResult.h"
#include "SamiTemplateEmailResource.h"
#include "SamiTemplateSMSResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMessagingApi {
public:
  SamiMessagingApi();
  virtual ~SamiMessagingApi();

  void 
  sendRawEmailWithCompletion(SamiRawEmailResource* rawEmailResource, void(* handler)(SamiError*));
  void 
  sendRawSMSWithCompletion(SamiRawSMSResource* rawSMSResource, void(* handler)(SamiError*));
  void 
  sendTemplatedEmailWithCompletion(SamiTemplateEmailResource* messageResource, void(* handler)(SamiError*));
  void 
  sendTemplatedSMSWithCompletion(SamiTemplateSMSResource* templateSMSResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMessagingApi_H_ */
