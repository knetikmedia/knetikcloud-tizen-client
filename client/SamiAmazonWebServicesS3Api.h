#ifndef SamiAmazonWebServicesS3Api_H_
#define SamiAmazonWebServicesS3Api_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiAmazonS3Activity.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAmazonWebServicesS3Api {
public:
  SamiAmazonWebServicesS3Api();
  virtual ~SamiAmazonWebServicesS3Api();

  SamiAmazonS3Activity* 
  getSignedS3URLWithCompletion(String* filename, String* contentType, void (* handler)(SamiAmazonS3Activity*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAmazonWebServicesS3Api_H_ */
