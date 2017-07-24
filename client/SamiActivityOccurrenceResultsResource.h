/*
 * SamiActivityOccurrenceResultsResource.h
 * 
 * 
 */

#ifndef SamiActivityOccurrenceResultsResource_H_
#define SamiActivityOccurrenceResultsResource_H_

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

class SamiActivityOccurrenceResultsResource: public SamiObject {
public:
    SamiActivityOccurrenceResultsResource();
    SamiActivityOccurrenceResultsResource(String* json);
    virtual ~SamiActivityOccurrenceResultsResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityOccurrenceResultsResource* fromJson(String* obj);

    IList* getPUsers();
    void setPUsers(IList* pUsers);

private:
    IList* pUsers;
};

} /* namespace Swagger */

#endif /* SamiActivityOccurrenceResultsResource_H_ */
