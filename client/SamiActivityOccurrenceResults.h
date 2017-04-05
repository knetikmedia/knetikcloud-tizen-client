/*
 * SamiActivityOccurrenceResults.h
 * 
 * 
 */

#ifndef SamiActivityOccurrenceResults_H_
#define SamiActivityOccurrenceResults_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUserActivityResultsResource.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiActivityOccurrenceResults: public SamiObject {
public:
    SamiActivityOccurrenceResults();
    SamiActivityOccurrenceResults(String* json);
    virtual ~SamiActivityOccurrenceResults();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityOccurrenceResults* fromJson(String* obj);

    IList* getPUsers();
    void setPUsers(IList* pUsers);

private:
    IList* pUsers;
};

} /* namespace Swagger */

#endif /* SamiActivityOccurrenceResults_H_ */
