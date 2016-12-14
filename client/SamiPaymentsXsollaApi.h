#ifndef SamiPaymentsXsollaApi_H_
#define SamiPaymentsXsollaApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiXsollaPaymentRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsXsollaApi {
public:
  SamiPaymentsXsollaApi();
  virtual ~SamiPaymentsXsollaApi();

  String* 
  createTokenUrlUsingPOSTWithCompletion(SamiXsollaPaymentRequest* request, void (* handler)(String*, SamiError*));
  void 
  receiveNotificationUsingPOSTWithCompletion( void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsXsollaApi_H_ */
