#include "SamiReportingChallengesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiReportingChallengesApi::SamiReportingChallengesApi() {

}

SamiReportingChallengesApi::~SamiReportingChallengesApi() {

}

void
getChallengeEventLeaderboardProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«ChallengeEventParticipantResource»* out = new SamiPageResource«ChallengeEventParticipantResource»();
    jsonToValue(out, pJson, L"SamiPageResource«ChallengeEventParticipantResource»*", L"SamiPageResource«ChallengeEventParticipantResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«ChallengeEventParticipantResource»* 
SamiReportingChallengesApi::getChallengeEventLeaderboardWithCompletion(Long* filterEvent, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«ChallengeEventParticipantResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getChallengeEventLeaderboardProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_event"), filterEvent);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/reporting/events/leaderboard");


  client->execute(SamiReportingChallengesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getChallengeEventParticipantsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«ChallengeEventParticipantResource»* out = new SamiPageResource«ChallengeEventParticipantResource»();
    jsonToValue(out, pJson, L"SamiPageResource«ChallengeEventParticipantResource»*", L"SamiPageResource«ChallengeEventParticipantResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«ChallengeEventParticipantResource»* 
SamiReportingChallengesApi::getChallengeEventParticipantsWithCompletion(Long* filterEvent, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«ChallengeEventParticipantResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getChallengeEventParticipantsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_event"), filterEvent);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/reporting/events/participants");


  client->execute(SamiReportingChallengesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
