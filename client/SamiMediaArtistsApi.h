#ifndef SamiMediaArtistsApi_H_
#define SamiMediaArtistsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiArtistResource.h"
#include "SamiPageResource«ArtistResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMediaArtistsApi {
public:
  SamiMediaArtistsApi();
  virtual ~SamiMediaArtistsApi();

  SamiArtistResource* 
  addArtistUsingPOSTWithCompletion(SamiArtistResource* artistResource, void (* handler)(SamiArtistResource*, SamiError*));
  SamiTemplateResource* 
  createArtistTemplateUsingPOSTWithCompletion(SamiTemplateResource* artistTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteArtistTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteArtistUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiTemplateResource* 
  getArtistTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getArtistTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiArtistResource* 
  getArtistUsingGETWithCompletion(Long* _id, Integer* showContributions, void (* handler)(SamiArtistResource*, SamiError*));
  SamiPageResource«ArtistResource»* 
  searchArtistsUsingGETWithCompletion(String* filterArtistsByName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ArtistResource»*, SamiError*));
  void 
  updateArtistTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* artistTemplateResource, void(* handler)(SamiError*));
  void 
  updateArtistUsingPUTWithCompletion(Long* _id, SamiArtistResource* artistResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMediaArtistsApi_H_ */
