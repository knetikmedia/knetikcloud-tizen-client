/*
 * SamiActivityOccurrenceCreationFailure.h
 * 
 * 
 */

#ifndef SamiActivityOccurrenceCreationFailure_H_
#define SamiActivityOccurrenceCreationFailure_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActivityOccurrenceJoinResult.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiActivityOccurrenceCreationFailure: public SamiObject {
public:
    SamiActivityOccurrenceCreationFailure();
    SamiActivityOccurrenceCreationFailure(String* json);
    virtual ~SamiActivityOccurrenceCreationFailure();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityOccurrenceCreationFailure* fromJson(String* obj);

    IList* getPUserResults();
    void setPUserResults(IList* pUser_results);

private:
    IList* pUser_results;
};

} /* namespace Swagger */

#endif /* SamiActivityOccurrenceCreationFailure_H_ */
