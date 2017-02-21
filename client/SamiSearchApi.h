#ifndef SamiSearchApi_H_
#define SamiSearchApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiPageResource«Map«string,object»».h"
#include "SamiResult.h"
#include "SamiSearchReferenceMapping.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSearchApi {
public:
  SamiSearchApi();
  virtual ~SamiSearchApi();

  void 
  addSearchIndexWithCompletion(String* type, String* _id, SamiObject* object, void(* handler)(SamiError*));
  void 
  addSearchMappingsWithCompletion(IList* mappings, void(* handler)(SamiError*));
  void 
  deleteSearchIndexWithCompletion(String* type, String* _id, void(* handler)(SamiError*));
  void 
  deleteSearchIndexesWithCompletion(String* type, void(* handler)(SamiError*));
  SamiPageResource«Map«string,object»»* 
  searchIndexWithCompletion(String* type, SamiObject* query, Integer* size, Integer* page, void (* handler)(SamiPageResource«Map«string,object»»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSearchApi_H_ */
