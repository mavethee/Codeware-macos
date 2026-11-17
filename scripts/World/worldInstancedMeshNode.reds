public native class worldInstancedMeshNode extends worldNode {
  public native let version: Uint8;
  public native let instanceBatches: array<Uint32>;
  public native let boundingBoxes: array<Box>;
  public native let streamingDistances: array<Float>;
}
