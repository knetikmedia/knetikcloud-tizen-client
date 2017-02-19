#ifndef SamiPaymentsXsollaApi_H_
#define SamiPaymentsXsollaApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiResult.h"
#include "SamiXsollaPaymentRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsXsollaApi {
public:
  SamiPaymentsXsollaApi();
  virtual ~SamiPaymentsXsollaApi();

  String* 
  createXsollaTokenUrlWithCompletion(SamiXsollaPaymentRequest* request, void (* handler)(String*, SamiError*));
  void 
  receiveXsollaNotificationWithCompletion( void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsXsollaApi_H_ */
