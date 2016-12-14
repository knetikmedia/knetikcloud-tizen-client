#ifndef SamiAWSS3Api_H_
#define SamiAWSS3Api_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiAmazonS3Activity.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAWSS3Api {
public:
  SamiAWSS3Api();
  virtual ~SamiAWSS3Api();

  SamiAmazonS3Activity* 
  preSignUrlUsingGETWithCompletion(String* filename, String* contentType, void (* handler)(SamiAmazonS3Activity*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAWSS3Api_H_ */
