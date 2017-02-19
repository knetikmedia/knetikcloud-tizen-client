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
#include "SamiResult.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMediaArtistsApi {
public:
  SamiMediaArtistsApi();
  virtual ~SamiMediaArtistsApi();

  SamiArtistResource* 
  addArtistWithCompletion(SamiArtistResource* artistResource, void (* handler)(SamiArtistResource*, SamiError*));
  SamiTemplateResource* 
  createArtistTemplateWithCompletion(SamiTemplateResource* artistTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteArtistWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteArtistTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiArtistResource* 
  getArtistWithCompletion(Long* _id, Integer* showContributions, void (* handler)(SamiArtistResource*, SamiError*));
  SamiTemplateResource* 
  getArtistTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getArtistTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«ArtistResource»* 
  getArtistsWithCompletion(String* filterArtistsByName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ArtistResource»*, SamiError*));
  void 
  updateArtistWithCompletion(Long* _id, SamiArtistResource* artistResource, void(* handler)(SamiError*));
  SamiTemplateResource* 
  updateArtistTemplateWithCompletion(String* _id, SamiTemplateResource* artistTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMediaArtistsApi_H_ */
