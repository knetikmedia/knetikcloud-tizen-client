#ifndef SamiDispositionsApi_H_
#define SamiDispositionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiDispositionCount.h"
#include "SamiDispositionResource.h"
#include "SamiPage«DispositionResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiDispositionsApi {
public:
  SamiDispositionsApi();
  virtual ~SamiDispositionsApi();

  SamiDispositionResource* 
  addDispositionUsingPOSTWithCompletion(SamiDispositionResource* disposition, void (* handler)(SamiDispositionResource*, SamiError*));
  void 
  deleteDispositionUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  IList* 
  getDispositionCountUsingGETWithCompletion(String* filterContext, String* filterOwner, void (* handler)(IList*, SamiError*));
  SamiDispositionResource* 
  getDispositionUsingGETWithCompletion(Long* _id, void (* handler)(SamiDispositionResource*, SamiError*));
  SamiPage«DispositionResource»* 
  getDispositionsUsingGETWithCompletion(String* filterContext, String* filterOwner, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«DispositionResource»*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiDispositionsApi_H_ */
