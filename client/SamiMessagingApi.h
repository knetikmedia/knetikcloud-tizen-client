#ifndef SamiMessagingApi_H_
#define SamiMessagingApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiRawEmailResource.h"
#include "SamiRawSMSResource.h"
#include "SamiTemplateEmailResource.h"
#include "SamiTemplateSMSResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMessagingApi {
public:
  SamiMessagingApi();
  virtual ~SamiMessagingApi();

  void 
  sendRawEmailUsingPOSTWithCompletion(SamiRawEmailResource* rawEmailResource, void(* handler)(SamiError*));
  void 
  sendRawSMSUsingPOSTWithCompletion(SamiRawSMSResource* rawSMSResource, void(* handler)(SamiError*));
  void 
  sendRawSMSUsingPOST1WithCompletion(SamiTemplateSMSResource* templateSMSResource, void(* handler)(SamiError*));
  void 
  sendTemplateEmailUsingPOSTWithCompletion(SamiTemplateEmailResource* messageResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMessagingApi_H_ */
