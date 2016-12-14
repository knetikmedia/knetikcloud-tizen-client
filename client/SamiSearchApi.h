#ifndef SamiSearchApi_H_
#define SamiSearchApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiPage«Map«string,object»».h"
#include "SamiSearchReferenceMapping.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSearchApi {
public:
  SamiSearchApi();
  virtual ~SamiSearchApi();

  void 
  externalAddUsingPOSTWithCompletion(String* type, String* _id, SamiObject* object, void(* handler)(SamiError*));
  void 
  externalDeleteAllUsingDELETEWithCompletion(String* type, void(* handler)(SamiError*));
  void 
  externalDeleteUsingDELETEWithCompletion(String* type, String* _id, void(* handler)(SamiError*));
  void 
  externalRegisterUsingPOSTWithCompletion(IList* mappings, void(* handler)(SamiError*));
  SamiPage«Map«string,object»»* 
  searchUsingPOSTWithCompletion(String* type, SamiObject* query, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«Map«string,object»»*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSearchApi_H_ */
